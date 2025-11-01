#include <conio.h>
#include <iostream>
#include <stdio.h>

using namespace std;

main()
{
    float tugas, uts, uas, nilaiAkhir;
    
    cout << "Masukkan nilai tugas: ";
    cin >> tugas;
    cout << "Masukkan nilai UTS: ";
    cin >> uts;
    cout << "Masukkan nilai UAS: ";
    cin >> uas;

    nilaiAkhir = (0.3 * tugas) + (0.35 * uts) + (0.35 * uas);

    cout << "Nilai Akhir: " << nilaiAkhir << endl;
    if (nilaiAkhir >= 60){
        cout << "Status: Lulus" << endl;
    } else {
        cout << "Status: Tidak Lulus" << endl;
    }
}
