#include <string>
#include <iostream>
#include <fstream>
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

void unosDatuma(int d, int m, int g){
	cout << "Unesite dan na koji zelite rentati auto: ";
	do{
		cin >> d;
		if(d<0 || d>31){
		cout << "[GRESKA]Unijeli ste dan koji ne postoji u sedmici!" << endl;
	}
	}while(d<0 || d>31);
	cout << "Unesite mjesec na koji zelite rentati auto: ";
	do{
		cin >> m;
		if(m<0 || m>12){
		cout << "[GRESKA]Unijeli ste mjesec koji ne postoji u godini!" << endl;
	}

		
	}while(m<0 || m>12);
	
	cout << "Unesite godinu na koju zelite rentati auto: ";
	do{
		cin >> g;
		if(g<2023){
		cout << "[GRESKA]Unijeli ste godinu koja je prosla" << endl;
	}
	}while(g<2023);
	cout << d << "." << m << "." << g << ".";
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
void rezervacije(){
	string ime_korisnika, prezime_korisnika, naziv_vozila, datum_preuzimanja, datum_vracanja, popust;
	int id_rezervacije;
	int id_rezervacije_vozila;
	ifstream inFile;
	inFile.open("rezervacije.txt");
	while(inFile >> id_rezervacije_vozila >> ime_korisnika >> prezime_korisnika >> naziv_vozila >> datum_preuzimanja >> datum_vracanja >> popust){
		
		id_rezervacije = id_rezervacije_vozila+1;
	}
	cout << "Unesite ime na koje cete rentati vozilo: ";
   cin >> ime_korisnika;
   cout << "Unesite prezime na koje cete rentati vozilo: ";
   cin >> prezime_korisnika;
   	ispisautomobila();
	
   cout << "Unesite vozilo koje zelite rentati: ";
   cin >> naziv_vozila;
	int d,m,g,d1,m1,g1;
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



		cout << "1.STUDENT: 5% na cijenu po danu,\n2.PENZIONER: 10% na cijenu po danu\n";
		cout << "Izaberite popust: ";
	   	cin >> x;

   
   
   	
   ofstream outFile;
   outFile.open("rezervacije.txt", ios::app);
   outFile << id_rezervacije << " " << ime_korisnika << " " << prezime_korisnika << " " << naziv_vozila << " " << d << "." << m << "." << g << " " << d1 << "." << m1 << "." << g1 << " " << x <<"\n" << endl;
   outFile.close();
	
}


	int z;
   	void korisnik_menu(){
		cout << "1. Pregled vozila: " << endl;
    	cout << "2. Popusti: " << endl;
    	cout << "3. Rezervisite vozilo: " << endl;
    	cout << "4. Rezervisano vozilo: " << endl;
    	cout << "Izaberite neku opciju: ";
			cin >> z;
			if(z==1){
				ispisautomobila();
				}else if(z==2){
					cout << "--------------------\n";
					cout << "\tPOPUSTI\n";
					cout << "--------------------\n";
					cout << "1.STUDENT: 5% na cijenu po danu,\n2.PENZIONER: 10% na cijenu po danu,\n3.10+ DANA: 15% na cijenu po danu." << endl;
				}else if(z==3){
					rezervacije();
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
            admin_menu();
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
         cout << "Dobrodosli, " << Ime << " " << Prezime << "!" << endl;
         korisnik_menu();
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
	

	






