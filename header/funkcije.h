#include <string>
#include <iostream>
#include <fstream>
using namespace std;
void unosDatuma(int d, int m, int g){
	int mjesec[12] = {31,28,31,30,31,30,31,31,30,31,30,31};
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
}
void registracija() {
   string username, password, Ime, Prezime;

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
   outFile << Ime << " " << Prezime << " " << username << " " << password <<"\n" << endl;
   outFile.close();
   
   cout << "Vasa registracija je uspjesna ! Sada se mozete loginovati." << endl;
}
void login() {
   string username, password, storedUsername, storedPassword, Ime, Prezime; //postavljamo varijable storedUsername i storedPassword da bi mogli provjeriti da li se uneseni podaci i podaci u .txtu podudaraju
   bool found = false; // varijabla found se koristi da provjerimo da li postoji korisnik
   cout << "Unesite svoje korisnicko ime: ";
   cin >> username;
   cout << "\nUnesite sifru: ";
   cin >> password;
   
   ifstream inFile; // provjeravamo da li postoji korisnik
   inFile.open("korisnici.txt");
   while (inFile >> Ime >> Prezime >> storedUsername >> storedPassword) {
      if (username == storedUsername && password == storedPassword) {
         found = true;
         break;
      }
   }
   inFile.close();
   
   if (found) {
      if (username == "admin" && password == "adminadmin") {
         cout << "Administrator ulogovan !" << endl;
      } 
      else {
         cout << "Dobrodosli, " << Ime << " " << Prezime << "!" << endl;
      }
   } else {
      cout << "Neispravan unos." << endl;
   }
}
void logout() {
    int temp;
    cout << "Odjavili ste se!" << endl;
    cout << "Odaberite opciju :\n 1.Registracija\n 2.Login\n";
    cin >> temp;
    if(temp == 1){registracija();cout <<"\n";login();}
    if(temp == 2){login();}
}