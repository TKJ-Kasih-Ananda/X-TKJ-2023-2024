#include <iostream>
using namespace std;

int main()
{
    float x;
    int i;
    float sum = 0;
    float rerata;

    cout << "masukkan nilai x";
    for (i = 0; x != 1; ++i) {
        cin >> x;
        if (x!= 1) {
            sum += x;
            cout << "masukkan nilai x";
        }
    }

    if (i != 0) {
        rerata = sum / i;
        cout << "rerata nilai = " << rerata << endl;
    } else {
        cout << "tidak ada data nilai ujian yang dimasukkan." << endl;
    }

    return 0;
}