#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main() {
    // Using a do-while loop to ensure the block of code is executed at least once
    int i = 1;
    do {
        // Displaying the current iteration
        cout << "Iteration " << i << endl;
        // Incrementing the loop variable
        ++i;
    } while (i <= 5);

    return 0;
}