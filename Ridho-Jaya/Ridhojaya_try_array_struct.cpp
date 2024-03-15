#include <iostream>
#include <string>

const int max = 5;

struct Student {
    char name[40];
    int score;
};

int main() {
    Student students[max];

    for (int i = 0; i < max; ++i) {
        std::cout << "Enter student " << i + 1 << "'s name: ";
        std::cin.getline(students[i].name, 40);

        std::cout << "Enter student " << i + 1 << "'s score: ";
        std::cin >> students[i].score;
        std::cin.ignore(); // Clear newline character from input buffer
    }

    std::cout << "\nStudent details:\n";
    for (int i = 0; i < max; ++i) {
        std::cout << "Student " << i + 1 << ":\n";
        std::cout << "Name: " << students[i].name << "\n";
        std::cout << "Score: " << students[i].score << "\n\n";
    }

    return 0;
}