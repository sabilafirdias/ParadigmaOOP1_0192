#ifndef IBU_H
#define IBU_H

class ibu {
public:
	string nama;
	vector<anak*> daftar_anak;		//vector = array. sebagai wadah untuk menampung banyak anak

	ibu(string pNama) :nama(pNama) {
		cout << "Ibu \"" << nama << "\" ada\n";
	}
	~ibu() {
		cout << "Ibu \"" << nama << "\" tidak ada\n";
	}
	void tambahAnak(anak*);
	void cetakAnak();
};

void ibu::tambahAnak(anak* pAnak) {
	daftar_anak.push_back(pAnak);		//push_back: untuk memasukkan data
}

void ibu::cetakAnak() {
	cout << "Daftar Anak dari Ibu \"" << this->nama << "\':\n";
	for (auto& a : daftar_anak) {		//auto&: akan otomatis membaca tipe datanya serta panjang datanya
		cout << a->nama << "\n";
	}
	
