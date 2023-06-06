if(id_korisnika5 == id_korisnika4){
        	inFile.close();
        	 inFile.open("automobili.txt");
            while (inFile >> id_vozila >> marka >> model >> sjedista >> cijena_po_danu >> vrsta_vozila >> transmisija >> kubikaza >> gorivo) {
                if (id_vozila == naziv_vozila && id_korisnika5==id_korisnika4) {
                    if (popust == 1) {
                        cijena_sa_popustom = cijena_po_danu * 0.95 * broj_dana_rezervisanja;
                    } else if (popust == 2) {
                        cijena_sa_popustom = cijena_po_danu * 0.90 * broj_dana_rezervisanja;
                    }
                }
                
                cout << marka << " | " << model << " | " << sjedista << " | " << cijena_sa_popustom << "KM | " << vrsta_vozila << " | " << transmisija << " | " << kubikaza << " | " << gorivo << " | " << datum_preuzimanja << " | " << datum_vracanja << endl;          
            }inFile.close();
    }
