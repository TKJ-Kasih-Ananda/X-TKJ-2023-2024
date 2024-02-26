#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main() {
    double x, sum = 0, rerata;
    int i = 0;

    cout << "Masukkan nilai ujian (akhiri dengan memasukkan nilai yang bukan angka):" << endl;

    do {
        cin >> x;
        if (cin.fail()) {
            break; // Exit loop if non-numeric value entered
        }
        sum += x;
        i++;
    } while (true);

    if (i != 0) {
        rerata = sum / i;
        cout << "Rerata nilai ujian: " << rerata << endl;
    } else {
        cout << "Tidak ada data nilai ujian yang dimasukkan" << endl;
    }
    
    return 0;
    }