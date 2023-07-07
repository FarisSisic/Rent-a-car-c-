struct Auta{
	int id_auta;
	char marka[50];
	char model[50];
	int sjedista;
	int cijena_po_danu;
	char vrsta_vozila[20];
};

struct Transmisija{
	Auta auta;
	char transmisija[50];
};

struct Kubikaza{
	Transmisija trans;
	int kubikaza;
	char gorivo[50];
};

struct Datum{
	int d,m,g;
};

struct Rezervacija{
	Datum d;
	Auta at;
	int id_rezervacije;
	char ime_korisnika[50];
	char prezime_korisnika[50];
	char datum_pocetka[50];
	char datum_zavrsetka[50];
	char naziv_automobila[50];
};
