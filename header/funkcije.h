#include <string>
#include <iostream>
#include <fstream>
#include "strukture.h"
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


void registracija(Korisnici k) {
   //string username, password, Ime, Prezime;
   //Korisnici k;
   cout << "Unesite svoje ime: "; 
   cin >> k.ime;

   cout << "Unesite svoje prezime: ";
   cin >> k.prezime;

   cout << "Unesite vlastito korisnicko ime: ";
   cin >> k.username;

   cout << "Unesite sifru: ";
   cin >> k.password;

   ofstream outFile;
   outFile.open("korisnici.txt", ios::app); // Otvaranje fajla u append modu da bi se novi korisnici dodavali na kraj fajla
   outFile << k.ime << " " << k.prezime << " " << k.username << " " << k.password << " "<< k.rola <<"\n" << endl;
   outFile.close();
   
   cout << "Vasa registracija je uspjesna ! Sada se mozete loginovati." << endl;
}
void login(Korisnici k) {
   string storedUsername, storedPassword; //postavljamo varijable storedUsername i storedPassword da bi mogli provjeriti da li se uneseni podaci i podaci u .txtu podudaraju
   bool found = false; // varijabla found se koristi da provjerimo da li postoji korisnik
   cout << "Unesite svoje korisnicko ime: ";
   cin >> k.username;
   cout << "\nUnesite sifru: ";
   cin >> k.password;
   
   ifstream inFile; // provjeravamo da li postoji korisnik
   inFile.open("korisnici.txt");
   while (inFile >> k.ime >> k.prezime >> storedUsername >> storedPassword) {
      if (k.username == storedUsername && k.password == storedPassword) {
         found = true;
         break;
      }
   }
   inFile.close();
   
   if (found) {
      if (k.username == "admin" && k.password == "adminadmin") {
         cout << "Administrator ulogovan !" << endl;
      } 
      else {
         cout << "Dobrodosli, " << k.ime << " " << k.prezime << "!" << endl;
      }
   } else {
      cout << "Neispravan unos." << endl;
   }
}



