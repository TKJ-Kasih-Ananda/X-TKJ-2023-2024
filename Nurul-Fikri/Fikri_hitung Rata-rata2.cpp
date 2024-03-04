#include <iostream>
using namespace std;

int main() {
    double x, sum = 0, rerata;
    int i;

    cout << "Masukkan jumlah nilai ujian: ";
    cin >> i;

    if (i > 0) {
        cout << "Masukkan nilai ujian:\n";

        for (int j = 0; j < i; ++j) {
            cin >> x;
            sum += x;
        }

        rerata = sum / i;
        cout << "Rerata nilai ujian: " << rerata << endl;
    } else {
        cout << "Jumlah nilai ujian harus lebih dari 0" << endl;
    }

    return 0;
}