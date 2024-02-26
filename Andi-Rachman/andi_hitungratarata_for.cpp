#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main() {
    double x, sum = 0, rerata;
    int i;

    cout << "Masukkan nilai ujian (akhiri dengan memasukkan nilai yang bukan angka):" << endl;

    for (i = 1; cin >> x; i++) {
        sum += x;
    }

    if (i != 1) {
        rerata = sum / i;
        cout << "Rerata nilai ujian: " << rerata << endl;
    } else {
        cout << "Tidak ada data nilai ujian yang dimasukkan" << endl;
    }

    return 0;
}