#include <conio.h>
#include <iostream>
#include <stdio.h>

using namespace std;

main()
{
    int a, b;
    cout << "Masukkan angka pertama : ";
    cin >> a;
    cout << "Masukkan angka kedua : ";
    cin >> b;

    if (a > b) {
        cout<< a << " : Lebih Besar dari : "<< b << endl;
    } else if (a < b) {
        cout<< b << " : Lebih Kecil dari : "<< b << endl;
    } else {
        cout<< a << " Keduanya sama besar " << b << endl;
    }

    cout << "Apakah Keduanya Sama Besar? "<< (a == b) << endl;
}
