#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main() {
    // Variables
    int total, i = 0;

    // Input
    cout << "Enter total: ";
    cin >> total;
    // Do-While loop to repeat until i is greater than or equal to total
    do {
        // Output something
        cout << "SEMANGAT PASTI BISA!!!" <<endl;
        i++;
    } while (i < total);

    return 0;
}