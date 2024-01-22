#include <iostream> 
using namespace std;

int main()
{
   int N; // variabel untuk menyimpan jumlah N
   int i; // variabel iterasi i
   int sum; // variabel sum untuk menyimpan hasil penjumlahan

   cout << "How many N do you want? "; // Menanyakan jumlah N yang di inginkan 
   cin >> N; // Masukan input
   sum = 0; // Menginisialisasi sum menjadi 0

   // Menggunakan perulangan while
   i = 1; // Menginisialisasi i menjadi 1 sebelum melakukan perulangan 
   while (i <= N) { //Melakukan perulangan 
     sum = sum + i; //Menambahkan nilai saat ini
     i++; //Menaikkan nilai i
   }
   cout << "The number of list=" << sum << endl; // Menampilkan hasil penjumlahan 
}