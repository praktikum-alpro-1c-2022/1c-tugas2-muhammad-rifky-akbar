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

    // Jajar Genjang
    int a, t, luas;

    cout << "Masukkan a : ";
    cin >> a;

    cout << "Masukkan t : ";
    cin >> t;

    luas = a * t;

    cout << "Luas jajar genjang : " << luas << endl;

    return 0;
}
