#include <iostream>
using namespace std;

int a, b;

void input() {
	cout << "BIlangan pertama = ";
	cin >> a;
	cout << "BIlangan kedua = ";
	cin >> b;
}

int penjumlahan(int bil_1, int bil_2) {
	return bil_1 + bil_2;
}
int pengurangan(int bil_1, int bil_2) {
	return bil_1 - bil_2;
}
int perkalian(int bil_1, int bil_2) {
	return bil_1 * bil_2;
}
int pembagian(int bil_1, int bil_2) {
	return bil_1 / bil_2;
}

int main()
{
	int pilihan;

	do {
		system("cls");
		cout << "=======Menu======" << endl;
		cout << "1. penjumlahan" << endl;
		cout << "2. pengurangan" << endl;
		cout << "3. perkalian" << endl;
		cout << "4. pembagian" << endl;
		cout << "5. keluar" << endl;
		cout << "masukan menu yang ingin dipilih (1/2/3/4/5): ";
		cin >> pilihan;

		switch (pilihan)
		{
		case 1:
			input();
			cout << "hasil penjumlahan = " << penjumlahan(a, b) << endl;
			system("pause");
			break;
		case 2:
			input();
			cout << "hasil pengurangan = " << pengurangan(a, b) << endl;
			system("pause");
			break;
		case 3:
			input();
			cout << "perkalian = " << perkalian(a, b) << endl;
			system("pause");
			break;
		case 4:
			input();
			cout << "hasil pembagian = " << pembagian(a, b) << endl;
			system("pause");
			break;
		case 5:
			break;
		default:
			cout << "menu tidak tersedia silahkan pilih lagi !!!" << endl;
			break;
		}
	}
}