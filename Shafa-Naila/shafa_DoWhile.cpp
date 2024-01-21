#include <iostream> 
using namespace std;

int main()
{
   int N; // Deklarasi variabel untuk menyimpan jumlah N
   int i; // Deklarasi variabel iterasi i
   int sum; // Deklarasi variabel sum untuk menyimpan hasil penjumlahan

   cout << "How many N do you want? "; // Menanyakan jumlah N
   cin >> N; // Membaca input pengguna
   sum = 0; // Menginisialisasi sum menjadi 0

   // Menggunakan do-while loop
   i = 1; // Menginisialisasi i menjadi 1
   do {
     sum = sum + i; // Menambahkan nilai saat ini
     i++; // Menaikkan nilai i pada loop
   } while (i <= N); // Melakukan loop 

   cout << "The number of list = " << sum << endl; // menampilkan hasil penjumlahan
}