#include <iostream>
using namespace std;

main() {
    string nama;
    string benar;
    int saldoAwal = 0, inputSaldo, menu, tarikTunai, setorTunai, transfer;

    cout << "=====================================================" << endl;
    cout << "Masukkan Nama Anda: ";
    cin >> nama;
    cout << "Apakah Anda Yakin Ingin Melanjutkan Transaksi? (Y/N): ";
    cin >> benar;
    cout << "=====================================================" << endl;

    if (benar == "Y" || benar == "y") {
        system("cls");
        cout << "=====================================================" << endl;
        cout << "Selamat Datang Di ATM, " << nama << endl;
        cout << "Saldo Anda Saat Ini: Rp " << saldoAwal << endl;
        cout << "=====================================================" << endl;
    } else {
        system("cls");
        cout << "=====================================================" << endl;
        cout << "          Terima Kasih Atas Kunjungan Anda           " << endl;
        cout << "=====================================================" << endl;
        return 0;
    }


    cout << "Masukkan Saldo : ";
    cin >> inputSaldo;
    cout << "=====================================================" << endl;
    cout << "NAMA ANDA              : " << nama << endl;
    cout << "SALDO ANDA SEKARANG    : Rp " << inputSaldo << endl;
    cout << "=====================================================" << endl;
    cout << endl;
    cout << "===================== MENU ATM ======================" << endl;
    cout << "1. CEK SALDO" << endl;
    cout << "2. TARIK TUNAI" << endl;
    cout << "3. SETOR TUNAI" << endl;
    cout << "4. TRANSFER" << endl;
    cout << "5. KELUAR" << endl;
    cout << "=====================================================" << endl;
    cout << "Pilih Menu : ";
    cin >> menu;
    
    switch (menu){
        case 1:
        system("cls");
        cout << "=====================================================" << endl;
        cout << "Saldo Anda Saat Ini: Rp " << inputSaldo << endl;
        cout << "=====================================================" << endl;
        break;

        case 2:
        system("cls");
        cout << "=====================================================" << endl;
        cout << "Saldo Anda Saat Ini: Rp " << inputSaldo << endl;
        cout << "Masukkan Jumlah Tarik Tunai: ";
        cin >> tarikTunai;
        cout << "=====================================================" << endl;
        cout << "Saldo Anda Saat Ini: Rp " << inputSaldo - tarikTunai << endl;
        cout << "=====================================================" << endl;
        break;

        case 3:
        system("cls");
        cout << "=====================================================" << endl;
        cout << "Saldo Anda Saat Ini: Rp " << inputSaldo << endl;
        cout << "Masukkan Jumlah Setor Tunai: ";
        cin >> setorTunai;
        cout << "=====================================================" << endl;
        cout << "Saldo Anda Saat Ini: Rp " << inputSaldo + setorTunai << endl;
        cout << "=====================================================" << endl;
        break;

        case 4:
        system("cls");
        cout << "=====================================================" << endl;
        cout << "Saldo Anda Saat Ini: Rp " << inputSaldo << endl;
        cout << "Masukkan Jumlah Transfer: ";
        cin >> transfer;
        cout << "=====================================================" << endl;
        cout << "Saldo Anda Saat Ini: Rp " << inputSaldo - transfer << endl;
        cout << "=====================================================" << endl;
        break;
        
        case 5:
        system("cls");
        cout << "=====================================================" << endl;
        cout << "          Terima Kasih Atas Kunjungan Anda           " << endl;
        cout << "=====================================================" << endl;
        break;
        
    default:
        system("cls");
        cout << "=====================================================" << endl;
        cout << "Menu Tidak Tersedia" << endl;
        cout << "=====================================================" << endl;
        break;
    }

    return 0;
}