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

    // Luas Segitiga
    double a, t, luas;

    cout << "Masukkan alas : ";
    cin >> a;

    cout << "Masukkan tinggi : ";
    cin >> t;

    luas = 0.5 * a * t;

    cout << "Luas segitiga : " << luas << endl;

    return 0;
}
