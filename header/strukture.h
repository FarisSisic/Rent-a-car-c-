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
	Pogon pogon;
	int kubikaza;
	char gorivo;
};
struct Datum{
	int d,m,g;
};


