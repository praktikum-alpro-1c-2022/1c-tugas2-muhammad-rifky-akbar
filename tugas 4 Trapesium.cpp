#include <iostream>
#include <string>

using namespace std;

int main (){
    // Data diri saya
    string nama = "Muhammad Rifky Akbar";
    long long npm = 2210631170088;

    cout << "Nama : " << nama << endl;
    cout << "NPM : " << npm << endl;
    cout << " " << endl;

    // Luas Trapesium
    double a, b, t, luas;

    cout << "Masukkan a : ";
    cin >> a;

    cout << "Masukkan b ; ";
    cin >> b;

    cout << "Masukkan t : ";
    cin >> t;

    luas = 0.5 * (a + b) * t;

    cout << "Luas Trapesium : " << luas << endl;

    return 0;
}
