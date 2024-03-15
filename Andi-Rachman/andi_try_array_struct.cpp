#include <iostream>
#include <string>
using namespace std;

struct Data {
    char name[40];
    int score;
};

const int max_students = 5;

int main() {
    Data student[max_students];

    for (int i = 0; i < max_students; ++i) {
        cout << "Enter student " << i+1 << " name: ";
        cin.getline(student[i].name, 40);
        cout << "Enter student " << i+1 << " score: ";
        cin >> student[i].score;
        cin.ignore(); // To consume the newline character left in the input buffer
    }

    for (int i = 0; i < max_students; ++i) {
        cout << "Student " << i+1 << " name: " << student[i].name << endl;
        cout << "Student " << i+1 << " score: " << student[i].score << endl;
    }

    return 0;
}
