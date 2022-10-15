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

    // Belah Ketupat
    double dsatu, ddua, luas;

    cout << "Masukkan D1 : ";
    cin >> dsatu;

    cout << "Masukkan D2 : ";
    cin >> ddua;

    luas = 0.5 * dsatu * ddua;

    cout << "Luas Belah Ketupat : " << luas << endl;

    return 0;
}
