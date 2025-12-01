#include <iostream>
using namespace std;

int main() {
    string nama, cek;
    int nim, saldo, menu, jml;

    // Input nama + validasi
    do {
        cout << "Masukkan Nama (1 kata): ";
        cin >> nama;
        cout << "Nama sudah benar? (TRUE/FALSE): ";
        cin >> cek;
    } while (cek != "TRUE" && cek != "true");

    // Input NIM
    cout << "Masukkan NIM (angka): ";
    cin >> nim;
    saldo = nim;

    cout << "\nNama : " << nama << endl;
    cout << "Saldo awal : Rp " << saldo << endl;

    // Menu ATM
    do {
        cout << "\n===== MENU ATM =====\n"
             << "1. Cek Saldo\n"
             << "2. Tarik Tunai\n"
             << "3. Setor Tunai\n"
             << "4. Transfer\n"
             << "5. Keluar\n"
             << "Pilih: ";
        cin >> menu;

        switch (menu) {
            case 1:
                cout << "Saldo: Rp " << saldo << endl;
                break;

            case 2:
                cout << "Jumlah tarik: Rp ";
                cin >> jml;
                if (jml > 0) {
                    if (jml <= saldo) {
                        saldo -= jml;
                        cout << "Tarik berhasil. Saldo sekarang: Rp " << saldo << endl;
                    } else {
                        cout << "Saldo kurang!\n";
                    }
                } else {
                    cout << "Jumlah tarik tidak valid!\n";
                }
                break;

            case 3:
                cout << "Jumlah setor: Rp ";
                cin >> jml;
                if (jml > 0) {
                    saldo += jml;
                    cout << "Setor berhasil. Saldo sekarang: Rp " << saldo << endl;
                } else {
                    cout << "Jumlah setor tidak valid!\n";
                }
                break;

            case 4:
                cout << "Jumlah transfer: Rp ";
                cin >> jml;
                if (jml > 0) {
                    if (jml <= saldo) {
                        saldo -= jml;
                        cout << "Transfer berhasil. Saldo sekarang: Rp " << saldo << endl;
                    } else {
                        cout << "Saldo kurang!\n";
                    }
                } else {
                    cout << "Jumlah transfer tidak valid!\n";
                }
                break;

            case 5:
                cout << "Terima kasih.\n";
                break;

            default:
                cout << "Menu tidak valid!\n";
        }

    } while (menu != 5);

    return 0
}