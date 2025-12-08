#include <iostream>
using namespace std;

int main() {
    string nim;
    cout << "Masukkan NIM: ";
    cin >> nim;

    int n = nim.length();
    int digits[100];  


    for (int i = 0; i < n; i++) {
        digits[i] = nim[i] - '0';
    }

    
    int total = 0;
    int maks = digits[0];
    int minim = digits[0];

    for (int i = 0; i < n; i++) {
        total += digits[i];

        if (digits[i] > maks) maks = digits[i];
        if (digits[i] < minim) minim = digits[i];
    }

    float rata = (float) total / n;

    
    cout << "Array digit: ";
    for (int i = 0; i < n; i++) {
        cout << digits[i] << " ";
    }

    cout << "\nTotal digit = " << total;
    cout << "\nDigit maksimum = " << maks;
    cout << "\nDigit minimum = " << minim;
    cout << "\nRata-rata digit = " << rata;

    cout << "\nReverse array: ";
    for (int i = n - 1; i >= 0; i--) {
        cout << digits[i] << " ";
    }

    cout << endl;
}