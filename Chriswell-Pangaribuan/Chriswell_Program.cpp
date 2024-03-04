#include <iostream>
using namespace std;

void outputDay(int day_code) {
    if (day_code == 1) {
        cout << "Monday";
    } else if (day_code == 2) {
        cout << "Tuesday";
    } else if (day_code == 3) {
        cout << "Wednesday";
    } else if (day_code == 4) {
        cout << "Thursday";
    } else if (day_code == 5) {
        cout << "Friday";
    } else if (day_code == 6) {
        cout << "Saturday";
    } else if (day_code == 7) {
        cout << "Sunday";
    } else {
        cout << "Input code missmatxh !!!";
    }
}

int main() {
    int day_code;
    cout << "Enter day code: ";
    cin >> day_code;

    outputDay(day_code);

    return 0;
}