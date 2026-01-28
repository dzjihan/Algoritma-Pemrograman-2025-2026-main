#include <iostream>
#include <vector>
using namespace std;

int main() {
    string nim;
    cout << "Masukkan NIM: ";
    cin >> nim;

    vector<int> digit;
    for (char c : nim) digit.push_back(c - '0');

    int total = 0;
    for (int d : digit) total += d;

    int maks = digit[0];
    for (int d : digit) if (d > maks) maks = d;

    int minim = digit[0];
    for (int d : digit) if (d < minim) minim = d;

    double rata = (double)total / digit.size();

    vector<int> rev;
    for (int i = digit.size() - 1; i >= 0; i--) rev.push_back(digit[i]);

    cout << "digit     [";
    for (int i = 0; i < digit.size(); i++) {
        cout << digit[i];
        if (i < digit.size() - 1) cout << ", ";
    }
    cout << "]\n";

    cout << "total     " << total << "\n";
    cout << "max       " << maks << "\n";
    cout << "min       " << minim << "\n";
    cout << "rata-rata " << rata << "\n";

    cout << "reverse   [";
    for (int i = 0; i < rev.size(); i++) {
        cout << rev[i];
        if (i < rev.size() - 1) cout << ", ";
    }
    cout << "]\n";

    return 0;
}