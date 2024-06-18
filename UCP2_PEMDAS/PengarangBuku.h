#ifndef P_BUKU
#define BUKU

class Pengarang {
public:
	string NamaPengarang;
	Pengarang(string pNamaPengarang) :NamaPengarang(pNamaPengarang) {
		cout << "Fisika dan Algoritma\" " << NamaPengarang << "\"Joko\n";
		cout << "Basis Data\" " << NamaPengarang << "\"Lia\n";
		cout << "Dasar Pemograman\" " << NamaPengarang << "\"Asroni\n";
		cout << "Matematika dan Matematika 1\" " << NamaPengarang << "\"Giga\n";
	}
};
#endif
