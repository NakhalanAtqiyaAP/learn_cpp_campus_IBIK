//...program menghitung harga total
#include <iostream>
#include <conio.h>
#define harga 4500.02 //...menentukan harga dengan define

using namespace std;

main()
{
	float jumlah, total;
	cout << "masukan jumlah barang = ";
	cin >> jumlah; total = harga * jumlah;
	cout << "nYang harus di bayar =" << total;
	
	getch();
	
	
}

