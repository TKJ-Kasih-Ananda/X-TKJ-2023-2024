#include <iostream>
using namespace std;

int main() {
    int num, i;
    cout << "Enter a number: ";
    cin >> num;
    i = 1;
    // Melakukan loop selama nilai i kurang dari atau sama dengan num
    while (i <= num) {
        cout << i << "\n"; // Mencetak nilai i diikuti dengan karakter baris baru
        i++; // Meningkatkan nilai i setelah mencetak
    }
    return 0;
}