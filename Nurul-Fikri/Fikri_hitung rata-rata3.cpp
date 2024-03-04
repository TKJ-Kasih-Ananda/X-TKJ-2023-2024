#include <iostream>
using namespace std;

int main() {
    float x, sum = 0, rerata;
    int count = 0;

    cout << "Masukkan nilai ujian (akhiri dengan memasukkan angka negatif):" << endl;

    do {
        cin >> x;
        if (x >= 0) {
            sum += x;
            count++;
        }
    } while (x >= 0);

    if (count > 0) {
        rerata = sum / count;
        cout << "Rata-rata nilai ujian adalah: " << rerata << endl;
    } else {
        cout << "Tidak ada data nilai ujian yang dimasukkan" << endl;
    }

    return 0;
}