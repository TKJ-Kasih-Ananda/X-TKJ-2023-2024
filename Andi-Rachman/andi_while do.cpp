#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

    int main() {
    // Declare variables
    int N;
    int i = 1; // Initialize loop counter
    int sum = 0; // Initialize sum variable

    // User input
    cout << "How many N do you want? ";
    cin >> N;

    // while-do loop
    while (i <= N) { // Continue loop while i is less than or equal to N
        sum += i; // Add current value of i to sum
        cout << "The number of list " << sum << endl; // Output result
        i++; // Increment loop counter
    }

    return 0;
}