#include <iostream>
using namespace std;

int main() {
    double x, sum = 0, rerata;
    int i = 0;

    cout << "Masukkan nilai ujian (akhiri dengan memasukkan nilai yang bukan angka):" << endl;

    while (cin >> x) {
        i++;
        sum += x;
    }

    if (i != 0) {
        rerata = sum / i;
        cout << "Rerata nilai ujian: " << rerata << endl;
    } else {
        cout << "Tidak ada data nilai ujian yang dimasukkan" << endl;
    }

    return 0;
}