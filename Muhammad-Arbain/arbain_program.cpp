#include <iostream>
using namespace std;

int main() {
    int day_code;

    cout << "Masukkan kode hari: ";
    cin >> day_code;

    switch (day_code) {
        case 1:
            cout << "Senin" << endl;
            break;
        case 2:
            cout << "Selasa" << endl;
            break;
        case 3:
            cout << "Rabu" << endl;
            break;
        case 4:
            cout << "Kamis" << endl;
            break;
        case 5:
            cout << "Jumat" << endl;
            break;
        case 6:
            cout << "Sabtu" << endl;
            break;
        case 7:
            cout << "Minggu" << endl;
            break;
        default:
            cout << "hari tidak ada" << endl;
    }

    return 0;
}