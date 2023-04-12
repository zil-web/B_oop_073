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
void mahasiswa printData() {
	cout << "\nNIM : " << nim;
	cout << "\nNamanya : " << nama;
	cout << "\nnilai : " << nilai;
}
int main()