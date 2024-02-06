#include <iostream> //pendeklarasian 
using namespace std;//stru

int main() {
  //Decleration
    int total, i = 0; //decleration value of i
  //Algoritma 
    cout << "masukan total i: "; //asking the number of i
    cin >> total; //read user input and store it in i
    for (i = 0; i < total; ++i) {
          cout << "halo bu hasna<3\n "; //display cout the world
    }

    return 0;
}