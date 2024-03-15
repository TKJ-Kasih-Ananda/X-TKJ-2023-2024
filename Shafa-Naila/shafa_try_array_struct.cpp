#include <iostream>
#include <string>

using namespace std;

const int max_size = 5;

struct data {
    char name[40];
    int score;
};

int main() {
    data student[max_size];

    for (int i = 0; i < max_size; ++i) {
        cout << "Enter student name: ";
        cin.getline(student[i].name, 40);

        cout << "Enter student score: ";
        cin >> student[i].score;
        cin.ignore(); // to clear the newline character from the input buffer
    }

    for (int i = 0; i < max_size; ++i) {
        cout << "Student " << i+1 << " name: " << student[i].name << endl;
        cout << "Student " << i+1 << " score: " << student[i].score << endl;
    }

    return 0;
}