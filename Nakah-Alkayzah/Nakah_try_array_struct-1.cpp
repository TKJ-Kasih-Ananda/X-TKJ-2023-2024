#include <iostream>
using namespace std;
#include <string>

const int maxx = 5;

struct student {
    char name[40];
    int score; 
    };
    
int main() {
    student student[maxx];

  for (int i=0;i<maxx; i++){
     cout<< "enter student "<<i+1<<"'s name = ";
      cin>>student[i].name,40;
     cout<<"enter student "<<i+1<<"'s score = ";
      cin>>student[i].score;
      }
  for (int i=0;i<maxx;i++){
        cout << "student"<<i+1<<"name"<<student[i].name<<endl;
        cout << "student"<<i+1<<"score"<<student[i].score<<endl;
        }      
  return 0;
}