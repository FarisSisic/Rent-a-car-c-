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
