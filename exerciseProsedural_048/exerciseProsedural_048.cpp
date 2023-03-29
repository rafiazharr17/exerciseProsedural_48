#include <iostream>
using namespace std;

int Kandidat = 20;
string nama[20];
int nilaiM[20];
int nilaiBing[20];

void inputan() {
	for (int i = 0; i < Kandidat; i++) {
		cout << "Data Kandidat Ke- " << i + 1 << endl;
		cout << "Nama Kandidat : ";
		cin >> nama[i];
		cout << "Masukkan Nilai Matematika : ";
		cin >> nilaiM[i];
		cout << "Masukkan Nilai Bahasa Inggris : ";
		cin >> nilaiBing[i];
		cin.ignore();

		cout << endl;
	}
}

bool diterima(int index) {
	return(nilaiM[index] > 80 or (nilaiM[index] + nilaiBing[index]) / 2 >= 70);
}

void tampilkanData() {
	cout << "Hasil Data Kandidat : " << endl;
	cout << "Nama" << "\t\t" << "Status" << endl;
	cout << endl;
	for (int i = 0; i < Kandidat; i++) {
		cout << nama[i] << "\t\t";
		if (diterima(i)) {
			cout << "Diterima";
		}
		else {
			cout << "Ditolak";
		}
		cout << endl;
	}
	cout << endl;
}

void hitungjumlahditerima() {
	int yangditerima = 0;
	int yangditolak = 0;
	for (int i = 0; i < Kandidat; i++) {
		if (diterima(i)) {
			yangditerima++;
		}
		else {
			yangditolak++;
		}
	}
	cout << "Jumlah Kandidat yang Diterima	: " << yangditerima << endl;
	cout << "Jumlah Kandidat yang Ditolak	: " << yangditolak << endl;
}

int main() {
	inputan();
	tampilkanData();
	hitungjumlahditerima();

	return 0;
}
