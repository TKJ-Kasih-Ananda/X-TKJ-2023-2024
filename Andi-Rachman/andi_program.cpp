#include <iostream>
using namespace std;

string try_switch(int day_code) {
    switch (day_code) {
        case 1:
            return "Monday";
        case 2:
            return "Tuesday";
        case 3:
            return "Wednesday";
        case 4:
            return "Thursday";
        case 5:
            return "Friday";
        case 6:
            return "Saturday";
        case 7:
            return "Sunday";
        default:
            return "Input code mismatch!!!";
    }
}

int main() {
    int day_code;
    cout << "Enter day code (1-7): ";
    cin >> day_code;
    string result = try_switch(day_code);
    cout << result << endl;
    return 0;
}
