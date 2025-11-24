#include <iostream>
using namespace std;

main() {
    string barang;
    float harga;
    int jumlah;

    cout << "Masukkan Nama Barang : ";
    cin >> barang;
    cout << "Masukkan Harga Barang : ";
    cin >> harga;
    cout << "Masukkan Jumlah Barang : ";
    cin >> jumlah;

    int total = harga * jumlah;

    int diskon = total * 0.07;
    if (total<=45700) {
        diskon = 0;
    }

    int total_pembayaran = total - diskon;

    cout << "========== STRUK PEMBELIAN ==========" << endl;
    cout << "Nama Barang : " << barang << endl;
    cout << "Harga Satuan : " << harga << endl;
    cout << "Jumlah Beli : " << jumlah << endl;
    cout << "Total Harga : " << total << endl;
    cout << "Diskon : " << diskon << endl;
    cout << "Total Pembayaran : " << total_pembayaran << endl;
    cout << "=====================================" << endl;

    return 0;

}