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

    //Lingkaran
    double r, luas;

    //phi nilainya konstan
    double phi = 3.14;

    cout << "Nilai phi : " << phi << endl;
    cout << "Masukkan nilai r : ";
    cin >> r;

    luas = phi * r * r;

    cout << "Luas Lingkaran : " << luas << endl;

    return 0;
}
