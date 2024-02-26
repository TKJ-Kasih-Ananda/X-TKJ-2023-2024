#include <iostream>
using namespace std;

int main() {
    float X, Sum = 0, Rerata;
    int I = 0;
    
    cout << "Masukkan bilangan (1 untuk berhenti): ";
    cin >> X;

    while (X != 1) {
        I++;
        Sum += X;
        cout << "Masukkan bilangan (1 untuk berhenti): ";
        cin >> X;
    }

    if (I != 0) {
        Rerata = Sum / I;
        cout << "Rata-rata: " << Rerata << endl;
    } else {
        cout << "Tidak ada data nilai yang dimasukkan" << endl;
    }

    return 0;
}