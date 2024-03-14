
#include <iostream>
using namespace std;

int arr[20];                                               //membuat arrat dengan panjang data 20
int n;                                                     //membuat variable imputan n

void input() {                                             //produce input
	while (true)
	{
		cout << "Masukkan Jumlah Data pada Array : ";      //membuat imputan jumlah elemen array
		cin >> n;                                          //memanggil vaiable inputan n

		if (n <= 20) {                                     //membuat kondisi n tidak lebih dari 20
			break;
		}
		else
		{
			cout << "\Array yang anda masukkan maksimal 20 elemen\n";     //menampilkan pesan jika data lebih dari 20
		}
	}
	cout << endl;
	cout << "======================" << endl;              //membuat jarak per baris prograam
	cout << "Masukkan Element Array" << endl;              //membuat tampilan susunan data element array
	cout << "======================" << endl;

	for (int i = 0; i < n; i++)                            //membuat perulangan for untuk menyimpan data pada array
	{
		cout << "Data ke-" << (i + 1) << " : ";
		cin >> arr[i];
	}
}

void insertionsort() {
	int temp;
	int i, j;

	for (i = 0; i <= n - 1; i++)
	{
		temp = arr[i];
		j = i - 1;
		while (j >= 0 && arr[j] > temp)
		{
			arr[j + 1] = arr[j];
			j--;
		}
		arr[j + 1] = temp;
	}

	cout << "\nTemp" << i + 1 << " : ";
	for (int k = 0; k < n; k++)
	{
		cout << "Data Ke " << i + 1 << " : " << arr[k] << endl;
	}

}

void display() {
	cout << endl;
	cout << "=================================" << endl;
	cout << "element array yang telah di susun" << endl;
	cout << "=================================" << endl;

	for (int j = 0; j < n; j++) {
		cout << arr[j] << endl;
	}
	cout << endl;
}

int main()
{
    std::cout << "Hello World!\n";
}

