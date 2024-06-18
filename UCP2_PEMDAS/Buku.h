#ifndef IBU_H
#define IBU_H

class Buku
{
public:
	string namaBuku;
	vector<Pengarang*> daftar_Pengarang;

	Buku(string pNama) : namaBuku(pNama)
	{
		cout << "Buku \"" << namaBuku << "\" Fisika dan Algoritma\n";
		cout << "Buku \"" << namaBuku << "\" Basis Data\n";
		cout << "Buku \"" << namaBuku << "\" Dasar Pemograman\n";
		cout << "Buku \"" << namaBuku << "\" Matematika dan Matematika 1\n";
	}
	void tambahPengarang(Pengarang*);
	void cetakPengarang();
};

void Buku::tambahPengarang(Pengarang* pPengarang)
{
	daftar_Pengarang.push_back(ppengarang);
}

void Buku::cetakPengarang()
{
	cout << "Daftar yang di karang\"" << this->NamaPengarang << "\":\n";
	for (auto& a : daftar_Pengarang)
	{
		cout << a->namaPengarang << "\n";

	}
	cout << endl;
}
#endif#pragma once
