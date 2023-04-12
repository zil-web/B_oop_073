#include <iostream>
using namespace std;

class Mahasiswa {
private:
	int nim;
	string nama;
	float nilai;
public:
	void input() {
		cout << "masukanNIM : ";
		cin >> nim;
		cout << "masukan nama : ";
		cin >> nama;
		cout << "masukan nilai : ";
		cin >> nilai;
	}
	void printData();

};
void Mahasiswa::printData() {
	cout << "\nNIM : " << nim;
	cout << "\nNamanya : " << nama;
	cout << "\nnilai : " << nilai;
}

class matakuliah {
private:
	string kode;
	string namaMK;
	int sks;
public:
	void input() {
		cout << "\n\nMasukan kode matakuliah : ";
		cin >> kode;
		cout << "Masukan nama mataKUliah : ";
		cin >> namaMK;
		cout << "Masukan sks : ";
		cin >> sks;
	}
};