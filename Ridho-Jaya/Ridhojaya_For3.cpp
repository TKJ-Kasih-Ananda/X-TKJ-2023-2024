#include <iostream>
using namespace std;

int main() {
    int num;
    // Menampilkan pesan untuk meminta pengguna memasukkan sebuah angka.
    cout << "Enter a number: ";
    cin >> num;
    
    // Loop for untuk mencetak angka dari 1 hingga num.
    for (int i = 1; i <= num; i++) {
        // Mencetak nilai i (urutan angka) diikuti dengan karakter baris baru.
        cout << i << "\n";
    }
    
    return 0;
}