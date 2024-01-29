#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main() {
    // Using a while loop to iterate as long as i is less than or equal to 5
    int i = 1;
    while (i <= 5) {
        // Displaying the current iteration
        cout << "Iteration " << i << endl;
        // Incrementing the loop variable
        ++i;
    }

    return 0;
}