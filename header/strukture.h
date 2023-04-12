struct Auta{
	int id_auta;
	char naziv_auta;
	int sjedista;
	int cijena_po_danu;
};
struct Transmisija{
	Auta auta;
	char transmisija;
};

struct Kubikaza{
	Transmisija trans;
	int kubikaza;
	char gorivo;
};
struct Datum{
	int d,m,g;
};

struct Korisnici{
	int id_korisnika;
	char username[50];
	char password[50];
	char ime[50];
	char prezime[50];
	int rola = 1; // Admin = 0;  Korisnik = 1; odredjivanje role 
				  // za admina ili korisnika ali pri registraciji bit ce 
				  // korisnik dok admin ne unese manuelno rolu za korisnika
};



