#include <iostream> 
using namespace std;

int main(){
int N; // Deklarasi variabel untuk menyimpan jumlah 
int i; // Deklarasi variabel iterasi i
int sum; // Deklarasi variabel sum untuk menyimpan hasil penjumlahan
cout << "How many N do you want? "; // Menanyakan jumlah N kepada pengguna
cin >> N; // Memasukan input
sum = 0; // Menginisialisasi sum menjadi 0
// Menggunakan while loop
i = 1; // Menginisialisasi i menjadi 1 sebelum memasuki loop
while (i <= N) { //Melakukan loop
sum = sum + i; //Menambahkan nilai saat ini
i++; //Menaikkan nilai i
   }
cout << "The number of list=" << sum << endl; // Menampilkan hasil penjumlahan angka
}
