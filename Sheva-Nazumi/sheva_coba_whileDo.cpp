#include <iostream> //pendeklarasian library sheva
using namespace std; //stru

int main() {
  //Decleration 
    int total, i = 0; //decleration value of i

    cout << "masukan jumlah i: "; //asking number of i
    cin >> total; //read user input and store in i

    // Using while loop to output spaces
    i = 0;  // Initialize i to 0
    while (i < total) {
        cout << "maaf telat mengirimkan:((\n";  // Output a space
        i++;               // Increment i
    }

    return 0;
}
