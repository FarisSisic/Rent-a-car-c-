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


