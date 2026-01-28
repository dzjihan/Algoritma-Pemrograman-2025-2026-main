#include <iostream>
#include <stdio.h>

using namespace std;

main()
{
    string nama;
    float harga;
    int jumlah, diskon;

    cout << "Masukkan Nama Barang: ";
    cin >> nama;
    cout << "Masukkan Harga Barang: ";
    cin >> harga;
    cout << "Masukkan Jumlah Barang: ";
    cin >> jumlah;

    float total = harga * jumlah;

    if (total > 51300) {
        diskon = total * 0.03;
    } else {
        diskon = 0;
    }

    float bayar = total - diskon;


    cout << "=====STRUK PEMBELIAN=====" << endl;
    cout << "Nama Barang : " << nama << endl;
    cout << "Harga Satuan : " << harga << endl;
    cout << "Jumlah Beli : " << jumlah << endl;
    cout << "Total Harga : " << total << endl;
    cout << "Diskon : " << diskon << endl;
    cout << "Total Bayar : " << bayar << endl;
    cout << "=========================" << endl;
}