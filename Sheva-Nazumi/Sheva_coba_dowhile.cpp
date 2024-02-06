#include <iostream> //pendeklarasian library sheva
using namespace std; //stru

int main() {
  //decleration 
    int total, i = 0; //decleration value of i

    // Prompt user to enter total
    cout << "masukan berapa i: "; //asking number of i
    cin >> total; //read user input and store in i

    // Algoritma 
    i = 0;          // Initialize i to 0
    do {
        std::cout << "bagaimana kabarnya bu hasna?\n";  // Output a space
        i++;               // Increment i
    } while (i < total);  // Continue until i is greater or equal to total

    return 0;
}