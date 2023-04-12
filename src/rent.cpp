#include <iostream>
#include <fstream>
#include "../header/funkcije.h"
//#include "../header/strukture.h"
using namespace std;


int main(){
	Korisnici k;
    int opcija;
    cout << "---------------------------------------\n"<<"Dobrodosli u nasu Rent-A-Car agenciju !\n"<<"---------------------------------------\n";
    cout << "\nOdaberite opciju :\n 1.Registracija\n 2.Login\n";
    cin >> opcija;
    if(opcija == 1){registracija(k);cout <<"\n";login(k);}
    if(opcija == 2){login(k);}
    
    
    
   
    
    
    
    
    
    
    
    system("pause");
    return 0;
}
