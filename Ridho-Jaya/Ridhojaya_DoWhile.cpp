#include <iostream>
using namespace std;

int main() {
    int num, i;
    //Menampilkan pesan untuk meminta user memasukkan sebuah angka.
    cout << "Enter a number: ";
    cin >> num;
    //Menginisialisasi variabel i dengan nilai 1.
    i = 1;
    do {
      //Mencetak nilai i (urutan angka) diikuti dengan karakter baris baru.
        cout << i << "\n";
        //Meningkatkan nilai i setelah mencetak.
        i++;
    } while (i <= num);
    return 0;
}