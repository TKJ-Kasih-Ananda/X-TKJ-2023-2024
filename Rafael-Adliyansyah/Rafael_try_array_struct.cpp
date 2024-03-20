#include <iostream>
#include <string>

using namespace std;

struct data {
    char name[40];
    int score;
};

const int max_students = 5;

int main() {
    data student[max_students];

    // Input data
    for (int i = 0; i < max_students; ++i) {
        cout << "Enter name for student " << i+1 << ": ";
        cin.getline(student[i].name, 40);
        cout << "Enter score for student " << i+1 << ": ";
        cin >> student[i].score;
        cin.ignore(); // Clear input buffer
    }

    // Output data
    for (int i = 0; i < max_students; ++i) {
        cout << "Student " << i+1 << ": ";
        cout << "Name: " << student[i].name << ", ";
        cout << "Score: " << student[i].score << endl;
    }

    return 0;
}
