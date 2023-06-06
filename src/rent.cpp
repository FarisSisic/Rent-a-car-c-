
#include <iostream>
#include <fstream>
#include "../header/funkcije.h"

using namespace std;


int main(){
	int a,b,c,d;
    int opcija;
    cout << "---------------------------------------\n"<<"Dobrodosli u nasu Rent-A-Car agenciju !\n"<<"---------------------------------------\n";
    cout << "\n 1.Registracija\n 2.Login\n 3.Napustite program\n";
    
    cout << "Odaberite opciju: ";
    cin >> opcija;
    if(opcija == 1){registracija();cout <<"\n";login();}
    if(opcija == 2){login();}
    if(opcija == 3){exit(0);}


    system("pause");
    return 0;
}

