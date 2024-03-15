#include <iostream>
using namespace std;
#include <string>

const int max_size = 5;

struct data {
    char name[40];
    int score; 
    };
    
int main() {
    data student[max_size];

  for (int i = 0; i < max_size; ++i) {
     cout << "enter student name: ";
      cin.getline(student[i].name,40);
     cout << "enter student score: ";
      cin >> student[i].score;
      }
  for (int i = 0; i < max_size; ++i) {
        cout << "student " << i+1 << " name: " << student[i].name << endl;
        cout << "student " << i+1 << " score: " << student[i].score << endl;
        }
  return 0;
}