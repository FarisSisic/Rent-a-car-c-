#include <string>
#include <iostream>
#include <fstream>
#include <vector>
#include "../header/strukture.h"
using namespace std;





	void popust(Auta a, int n){
		if(n==1){
			cout << "Dobili ste 5% popusta kao student!";
			cout << "\nVasa nova cijena je: " << a.cijena_po_danu*0.95;
		}else if(n==2){
			cout << "Dobili ste 10% popusta kao penzioner!";
			cout << "\nVasa nova cijena je: " << a.cijena_po_danu*0.9;
		}else if(n==3){
			cout << "Dobili ste 15% popusta zato sto uzimate vise od 10 dana vozilo!";
			cout << "\nVasa nova cijena je: " << a.cijena_po_danu*0.85 << endl;
			
		}
	}
	

void unosautomobila() {
	string marka, model, sjedista, cijena_po_danu, vrsta_vozila, transmisija, kubikaza, gorivo;
	int id_automobila;
	int id;
	ifstream inFile;
	inFile.open("automobili.txt");
	while(inFile >> id >> marka >> model >> sjedista >> cijena_po_danu >> vrsta_vozila >> transmisija >> kubikaza >> gorivo){
		
		id_automobila = id+1;
	}
   
   cout << "Unesite marku vozila: "; 
   cin >> marka;

   cout << "Unesite model vozila: ";
   cin >> model;

   cout << "Unesite broj sjedista: ";
   cin >> sjedista;

   cout << "Unesite cijenu po danu: ";
   cin >> cijena_po_danu;
   
   cout << "Unesite vrstu vozila: ";
   cin >> vrsta_vozila;
   
   cout << "Unesite transmisiju vozila: ";
   cin >> transmisija;
   
   cout << "Unesite kubikazu vozila: ";
   	cin >> kubikaza;
   	
   	cout << "Unesite gorivo vozila: ";
	cin >> gorivo;
	
   ofstream outFile;
   outFile.open("automobili.txt", ios::app); // Otvaranje fajla u append modu da bi se novi korisnici dodavali na kraj fajla
   outFile << id_automobila << " " << marka << " " << model << " " << sjedista << " " << cijena_po_danu << " " << vrsta_vozila << " " << transmisija << " " << kubikaza << " " << gorivo <<"\n" << endl;
   outFile.close();
   

}
void ispisautomobila(){
	int id;
	   string marka, model, sjedista, cijena_po_danu, vrsta_vozila, transmisija, kubikaza, gorivo;
	ifstream inFile;
	inFile.open("automobili.txt");
	cout << "--------------------------------\n";
	cout << "RB|MARKA|MODEL|SJEDISTA|CIJENA PO DANU|VRSTA VOZILA|TRANSMISIJA|KUBIKAZA|GORIVO|\n";
	while(inFile >> id >> marka >> model >> sjedista >> cijena_po_danu >> vrsta_vozila >> transmisija >> kubikaza >> gorivo){
		cout << id << ". | " << marka << " | " << model << " | " << sjedista << " | " << cijena_po_danu << "KM" << " | " << vrsta_vozila << " | " << transmisija << " | " << kubikaza << " | " << gorivo << endl;
	}
	
}
void rezervacije(int id_korisnika2){

		string Ime1, Prezime1, username1, password1;
	int id_korisnika3;
		int d2,m2,g2,d3,dd3;
	ifstream inFile;
		inFile.open("korisnici.txt");
	while(inFile >> id_korisnika3 >> Ime1 >> Prezime1 >> username1 >> password1){
		id_korisnika2 = id_korisnika3;
	}
	inFile.close();
		string naziv_vozila, datum_preuzimanja, datum_vracanja, popust, Ime2, Prezime2;
		int brojindexa, brojpenzionogceka;
	int id_rezervacije = 0;
	int id_rezervacije_vozila;
	inFile.open("rezervacije.txt");
	while (inFile >> id_rezervacije_vozila >> Ime2 >> Prezime2 >> naziv_vozila >> datum_preuzimanja >> datum_vracanja >> popust >> id_korisnika2 >> brojindexa >> brojpenzionogceka >> d3) {
		if (id_rezervacije_vozila > id_rezervacije) {
        id_rezervacije = id_rezervacije_vozila;
        	
    }
	
	}
id_rezervacije++;


   	ispisautomobila();
	
   cout << "Unesite vozilo koje zelite rentati: ";
   cin >> naziv_vozila;
	int d,m,g,d1,m1,g1, x;
   cout << "Unesite dan preuzimanja vozila: ";
   	cin >> d;
   	cout << "Unesite mjesec preuzimanja vozila: ";
   	cin >> m;
   	cout << "Unesite godinu preuzimanja vozila: ";
   	cin >> g;
   cout << "Unesite dan povratka vozila: ";
	cin >> d1;
	cout << "Unesite mjesec povratka vozila: ";
	cin >> m1;
	cout << "Unesite godinu povratka vozila: ";
	cin >> g1;

	d2 = d1-d;
	m2=(m1-m)*30;
	g2=(g1-g)*365;
	dd3=d2+m2+g2;

		cout << "1.STUDENT: 5% na cijenu po danu,\n2.PENZIONER: 10% na cijenu po danu,\n3. NISTA OD NAVEDENOG";
		cout << "Izaberite popust: ";
	   	cin >> x;

		if(x==1){
			cout << "Unesite broj indexa: ";
			cin >> brojindexa;
			cout << "Dobili ste popust od 5%!";
			brojpenzionogceka = 0;
		}else{
			brojindexa=0;
		}
		if(x==2){
			cout << "Unesite broj penzionog ceka: ";
			cin >> brojpenzionogceka;
			cout << "Dobili ste popust od 10%!";
			brojindexa = 0;
		}else{
			brojpenzionogceka=0;
		}
		if(x==3){
			brojpenzionogceka = 0;
			brojindexa = 0;
		}

		

   

   ofstream outFile;
   outFile.open("rezervacije.txt", ios::app);
   outFile << id_rezervacije << " " << Ime1 << " " << Prezime1 << " " << naziv_vozila << " " << d << "." << m << "." << g << " " << d1 << "." << m1 << "." << g1 << " " << x << " " << id_korisnika2 << " " << brojindexa << " " << brojpenzionogceka  << " " << dd3<<"\n" << endl;
   outFile.close();
	
}

void pregled_korisnika(){
	int id;
	string ime, prezime, username, password;

	cout << "Ime | Prezime | Username | Password\n";
	ifstream inFile;
	inFile.open("korisnici.txt");
	while(inFile >> id >> ime >> prezime >> username >> password){
		cout << ime << " | " << prezime << " | " << username << " | " << password << endl;
	
	}
	inFile.close();
	



}





struct Automobil {
    int id_vozila;
    string marka;
    string model;
    string sjedista;
    int cijena_po_danu;
    string vrsta_vozila;
    string transmisija;
    string kubikaza;
    string gorivo;
};
	
void rezervisana_vozila(int id_korisnika4) {
    int naziv_vozila, id_vozila;
    int id_rezervacije_vozila;
    int id_korisnika5;
    int cijena_sa_popustom, cijena_po_danu, popust, broj_dana_rezervisanja;
    string datum_preuzimanja, datum_vracanja, Ime2, Prezime2, brojindexa, brojpenzionogceka;
    string marka, model, sjedista, vrsta_vozila, transmisija, kubikaza, gorivo;
	vector<Automobil> automobili;

    ifstream inFile;
    inFile.open("automobili.txt");
    while (inFile >> id_vozila >> marka >> model >> sjedista >> cijena_po_danu >> vrsta_vozila >> transmisija >> kubikaza >> gorivo) {
        Automobil automobil;
        automobil.id_vozila = id_vozila;
        automobil.marka = marka;
        automobil.model = model;
        automobil.sjedista = sjedista;
        automobil.cijena_po_danu = cijena_po_danu;
        automobil.vrsta_vozila = vrsta_vozila;
        automobil.transmisija = transmisija;
        automobil.kubikaza = kubikaza;
        automobil.gorivo = gorivo;
        automobili.push_back(automobil);
    }
    inFile.close();

    inFile.open("rezervacije.txt");
    while (inFile >> id_rezervacije_vozila >> Ime2 >> Prezime2 >> naziv_vozila >> datum_preuzimanja >> datum_vracanja >> popust >> id_korisnika5 >> brojindexa >> brojpenzionogceka >> broj_dana_rezervisanja) {
        if (id_korisnika5 == id_korisnika4) {
            for (const auto& automobil : automobili) {
                if (automobil.id_vozila == naziv_vozila) {
                	
                    cout << automobil.marka << " | " << automobil.model << " | " << automobil.sjedista << " | " << automobil.cijena_po_danu << "KM | " << automobil.vrsta_vozila<< " | " << automobil.transmisija << " | " << automobil.kubikaza << " | " << automobil.gorivo << " | " << datum_preuzimanja << " | " << datum_vracanja << " | " << broj_dana_rezervisanja << " dana | " << endl;
}
}
}
}
inFile.close();
}


   
     void admin_pregled_rezervacija(){
     	
     	int id_vozila, cijena_po_danu;
     	string marka, model, sjedista, vrsta_vozila, transmisija, kubikaza, gorivo;
     	vector<Automobil> automobili;
     	ifstream inFile;
    inFile.open("automobili.txt");
    while (inFile >> id_vozila >> marka >> model >> sjedista >> cijena_po_danu >> vrsta_vozila >> transmisija >> kubikaza >> gorivo) {
        Automobil automobil;
        automobil.id_vozila = id_vozila;
        automobil.marka = marka;
        automobil.model = model;
        automobil.sjedista = sjedista;
        automobil.cijena_po_danu = cijena_po_danu;
        automobil.vrsta_vozila = vrsta_vozila;
        automobil.transmisija = transmisija;
        automobil.kubikaza = kubikaza;
        automobil.gorivo = gorivo;
        automobili.push_back(automobil);
    }
    inFile.close();
     	
     	
    
     	int id;
     	int id_vozila1, id_popusta, id_korisnika, brojindexa, brojpenzionogceka, brojdanazauzimanja;
     	string ime, prezime, datum_preuzimanja, datum_povratka;
     	cout << "------------------------------------\n";
     	cout << "PREGLED HISTORIJE REZERVISANIH AUTOMOBILA\n";
     	cout << "------------------------------------\n";
     	inFile.open("rezervacije.txt");
     	while(inFile >> id >> ime >> prezime >> id_vozila1 >> datum_preuzimanja >> datum_povratka >> id_popusta >> id_korisnika >> brojindexa >> brojpenzionogceka >> brojdanazauzimanja ){
     		
			 for(const auto& automobil : automobili){
			 	if(automobil.id_vozila == id_vozila1){
			 		
			 	 cout << id << " | " << ime << " | " << prezime << " | " << automobil.marka << " | " << automobil.model << " | " << automobil.cijena_po_danu << "KM | " << " | " << datum_preuzimanja << " | " << datum_povratka << " | " << id_popusta << " | " << id_korisnika << " | " << brojindexa << " | " << brojpenzionogceka << " | " << brojdanazauzimanja << " dana | " << endl;


				 }
			 }
			 
			 
			 
		 }
     	
     	
     	
	 }


	int z;
	int p;
   	void korisnik_menu(int id_korisnika1){
		cout << "1. Pregled vozila: " << endl;
    	cout << "2. Popusti: " << endl;
    	cout << "3. Rezervisite vozilo: " << endl;
    	cout << "4. Rezervisano vozilo: " << endl;
    	cout << "5. Odjava!" << endl;
    	cout << "Izaberite neku opciju: ";
			cin >> z;
			if(z==1){
					cout << "\n***************************************\n" << endl;
				ispisautomobila();
					cout << "\n***************************************\n" << endl;
				system("PAUSE");
				system("cls");
						cout << "\n---------------------------------------\n" << endl;
						korisnik_menu(id_korisnika1);	
					
				}else if(z==2){
					cout << "\n***************************************\n" << endl;
					cout << "--------------------\n";
					cout << "\tPOPUSTI\n";
					cout << "--------------------\n";
					cout << "1.STUDENT: 5% na cijenu po danu,\n2.PENZIONER: 10% na cijenu po danu,\n";
					cout << "\n***************************************\n" << endl;
					system("PAUSE");
					system("cls");
						cout << "\n---------------------------------------\n" << endl;
						korisnik_menu(id_korisnika1);	
					
					
				}else if(z==3){
					rezervacije(id_korisnika1);
			cout << "\n---------------------------------------\nUspjesno ste rezervisali vozilo !\n---------------------------------------\n" << endl;
						korisnik_menu(id_korisnika1);
				}else if(z==4){
										cout << "\n***************************************\n" << endl;
					rezervisana_vozila(id_korisnika1);
										cout << "\n***************************************\n" << endl;
					system("PAUSE");
					system("cls");
						cout << "\n---------------------------------------\n" << endl;
						korisnik_menu(id_korisnika1);	
					
					
				}else if(z==5){
					cout << "USPJESNO STE SE ODJAVILI!" << endl;
					system("break");
					
				}
			}


	void admin_menu(){
		cout << "1. Unesite vozila: " << endl;
    	cout << "2. Pregled vozila: " << endl;
    	cout << "3. Rezervisana vozila: " << endl;
    	cout << "4. Pregled korisnika: " << endl;
      cout << "5. Logout" << endl;
    		cout << "\nIzaberite neku opciju: ";
			cin >> z;
    		if(z==1){
				unosautomobila();
            cout << "\n---------------------------------------\nUspjesno ste unijeli novo vozilo !\n---------------------------------------\n" << endl;
            admin_menu();
			}else if(z==2){
				ispisautomobila();
            cout << "\n---------------------------------------\n" << endl;
            system("PAUSE");
				system("cls");
            admin_menu();
			}else if(z==3){
				admin_pregled_rezervacija();
				cout << "\n---------------------------------------\n" << endl;
				system("PAUSE");
				system("cls");
				admin_menu();
			}else if(z==4){
				pregled_korisnika();
				cout << "\n---------------------------------------\n" << endl;
				system("PAUSE");
				system("cls");
            admin_menu();
			}else if(z==5){
				cout << "USPJESNO STE SE ODJAVILI!" << endl;
				system("break");
			}
    	
	}

void login() {
	int id;
   string username, password, storedUsername, storedPassword, Ime, Prezime; //postavljamo varijable storedUsername i storedPassword da bi mogli provjeriti da li se uneseni podaci i podaci u .txtu podudaraju
   bool found = false; // varijabla found se koristi da provjerimo da li postoji korisnik
   cout << "Unesite svoje korisnicko ime: ";
   cin >> username;
   cout << "\nUnesite sifru: ";
   cin >> password;
   ifstream inFile; // provjeravamo da li postoji korisnik
   inFile.open("korisnici.txt");
   while (inFile >> id >> Ime >> Prezime >> storedUsername >> storedPassword) {
      if (username == storedUsername && password == storedPassword) {
         found = true;
         break;
      }
   }
   inFile.close();
   
   
   
 
   if (found) {
      if (username == "admin" && password == "adminadmin") {
         cout << "\n---------------------------------------\nAdministrator ulogovan !\n---------------------------------------\n" << endl;
         admin_menu();
      } 
      else {
      	 cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-" << endl;
         cout << "\tDobrodosli, " << Ime << " " << Prezime << "!" << endl;
         cout << "-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-" << endl;
         korisnik_menu(id);
      }
   } else {
      cout << "Neispravan unos." << endl;
   }
}
void registracija() {
   string username, password, Ime, Prezime;
   int id;
   int id_korisnika;
   ifstream inFile;
	inFile.open("korisnici.txt");
	while(inFile >> id >> Ime >> Prezime >> username >> password){
		
		id_korisnika = id+1;
	}
   cout << "Unesite svoje ime: "; 
   cin >> Ime;

   cout << "Unesite svoje prezime: ";
   cin >> Prezime;

   cout << "Unesite vlastito korisnicko ime: ";
   cin >> username;

   cout << "Unesite sifru: ";
   cin >> password;

   ofstream outFile;
   outFile.open("korisnici.txt", ios::app); // Otvaranje fajla u append modu da bi se novi korisnici dodavali na kraj fajla
   outFile << id_korisnika << " " << Ime << " " << Prezime << " " << username << " " << password <<"\n" << endl;
   outFile.close();
   
   cout << "Vasa registracija je uspjesna ! Sada se mozete loginovati." << endl;
}



	void unosVozila(Kubikaza &k){
		cout << "Unesite naziv vozila: ";
		cin >>k.trans.auta.marka;
		cout << "Unesite vrstu vozila: ";
		cin >>k.trans.auta.vrsta_vozila;
		cout << "Unesite broj sjedista u vozilu: ";
		cin >> k.trans.auta.sjedista;
		cout << "Unesite transmisiju vozila: ";
		cin >> k.trans.transmisija;
		cout << "Unesite kubikazu vozila: ";
		cin >> k.kubikaza;
		cout << "Unesite gorivo koje koristi vozilo: ";
		cin >> k.gorivo;
		cout << "Unesite cijenu po danu rente vozila: ";
		cin >> k.trans.auta.cijena_po_danu;
	}
	void pregledVozila(Kubikaza k){
		cout << "\n--------------------------" << endl;
		cout << "\tPregled vozila\t\n";
		cout << "--------------------------" << endl;
		cout << "Naziv vozila: " << k.trans.auta.marka << endl;
		cout << "Vrsta vozila: " << k.trans.auta.vrsta_vozila << endl;
		cout << "Broj sjedista vozila: " << k.trans.auta.sjedista << endl;
		cout << "Transmisija vozila: " << k.trans.transmisija << endl;
		cout << "Kubikaza vozila: " << k.kubikaza << endl;
		cout << "Gorivo vozila: " << k.gorivo << endl;
		cout << "Cijena po danu rente vozila: " << k.trans.auta.cijena_po_danu << "KM" << endl;
		cout << "--------------------------" << endl;
	}

	void odreditiPopust(int n){
		if(n == 1){
			cout << "Unesite broj indexa: ";
			int x;
			cin >> x;
		}else if(n == 2){
			cout << "Unesite broj penzionog ceka: ";
			int y;
			cin >> y;
		}else if(n == 3){
			cout << "Na koliko zelite vremenski uzeti vozilo: ";
			int z;
			do{
				cin >> z;
				if(z<10){
					cout << "[GRESKA]Unijeli ste manje od 10 dana, molimo vas unesite veci broj dana!";
				}	
			}while(z<10);
			
		}
	}
	





