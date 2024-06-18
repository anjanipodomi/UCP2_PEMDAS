#include <iostream>
#include <vector>
#include "PengarangBuku.h"
#include <Buku.h>
using namespace std;

/*Class Penerbit*/
class Penerbit;

//!Class Pengarang
class pengarang {
    /*! Berisikan string namaPengarang dengan namaPengarang Joko, Lia, Giga*/
	string NamaPengarang;      
	vector<penerbit*>nama_penerbit;     
	pengarang(string pNamaPengarang) :NamaPengarang(pNamaPengarang) {   
		cout << "Joko, Lia, Giga \" " << NamaPengarang << "\" Gama Press\n";    
 	}
	pengarang(string pNamaPengarang) :NamaPengarang(pNamaPengarang) {
		cout << "Asroni, Giga \" " << NamaPengarang << "\" Intan Parawira\n";  
	}
	void tambahPenerbit(Penerbit*); /*!menggunakan pointer Penerbit*/
	void cetakPenerbit();   
};

class penerbit {        /*class penerbit*/
public:
    /*! dengan akses modifier public, menggunakan string namaPengarang*/
    string namaPengarang;       //menggunkan string namaPengarang
    vector<penerbit*> daftar_Pengarang; /*!menggunakan vector*/

    /*!Penerbit menggunakan string NamaPenerbit : Giga*/
    penerbit(string pNamaPenerbit) :namaPengarang(pNamaPenerbit) {      
        cout << "penerbit yang di ikuti \"" << namaPengarang << "\" Giga\n";        
    }
    ~penerbit() {
        cout << "Gama press, intan prawira\"" << namaPengarang << "\" Giga\n";      
    }
    void tambahPenerbitP(penerbit*);    /*menggunakan pointer Penerbit*/
    void cetakPenerbit();

};

void pengarang::tambahPenerbit(penerbit* pPenerbit) {   /*!void pengarang tambahPenerbit*/
    daftar_Penerbit.push_back(pPenerbit);
}

void pengarang::cetakPenerbit() {   
    cout << "Daftar pengarang pada penerbit \"" << this->NamaPengarang << "\":\n";
    for (auto& a : daftar_Penerbit) {
        cout << a->NamaPenerbit << "\n";
    }
    cout << endl;
}

void Penerbit::tambahpengarang(pengarang* pPengarang) {
    daftar_pengarang.push_back(pPengarang);
    pPengarang->tambahpenerbit(this);
}
void penerbit::cetakpengarang() {
    cout << "Daftar penerbit dari pengarang  \"" << this->NamaPenerbit << "\":\n";
    for (auto& a : daftar_pengarang) {
        cout << a->NamaPenerbit << "\n";
    }
    cout << endl;
}

int main()
{
    Penerbit* varPenerbit1 = new Pengarang("Gama press");
    Penerbit* varPenerbit2 = new Pengarang("Intan Pariwara");
    pengarang* varPengarang1 = new pengarang("Joko, Lia, Giga");
    pengarang* varPengarang2 = new pengarang("Asroni, Giga");

    varPenerbit1->tambahpengarang(varpengarang1);
    varPenerbit1->tambahpengarang(varpengarang2);
    varPenerbit2->tambahPengarang(varPengarang1);

    varPenerbit1->cetakPengarang();
    varPenerbit2->cetakPengarang();
    varpengarang1->cetakPenerbit();
    varpengarang2->cetakPenerbit();

    delete varPengarang1;
    delete varPengarang2;
    delete varPenerbit1;
    delete varPenerbit2;

    return 0;
}