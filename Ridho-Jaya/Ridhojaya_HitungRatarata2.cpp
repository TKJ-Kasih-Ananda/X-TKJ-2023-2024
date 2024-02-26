#include <iostream>
using namespace std;

int main() {
    float x, sum = 0, rerata;
    int i = 0;

    cout << "Masukkan nilai x: ";
    cin >> x;

    while (x != 1) {
        i++;
        sum += x;
        cout << "Masukkan nilai x: ";
        cin >> x;
    }

    if (i != 0) {
        rerata = sum / i;
        cout << "Rerata: " << rerata << endl;
    } else {
        cout << "Tidak ada data nilai ujian yang dimasukkan" << endl;
    }

    return 0;
}