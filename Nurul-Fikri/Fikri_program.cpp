#include <iostream>
using namespace std;

void try_switch(int day_code) {
    switch(day_code) {
        case 1:
            cout << "Monday";
            break;
        case 2:
            cout << "Tuesday";
            break;
        case 3:
            cout << "Wednesday";
            break;
        case 4:
            cout << "Thursday";
            break;
        case 5:
            cout << "Friday";
            break;
        case 6:
            cout << "Saturday";
            break;
        case 7:
            cout << "Sunday";
            break;
        default:
            cout << "Input code mismatch!!!";
    }
}

int main() {
    // Panggil fungsi try_switch() di sini
    return 0;
}
