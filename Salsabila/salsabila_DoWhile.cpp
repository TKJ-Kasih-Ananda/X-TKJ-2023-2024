#include <iostream>// the header of programs 
using namespace std;// struktur 

int main()// main program 
{
   int N;// deklarasi variabel untuk menyimpan jumlah N
   int i;// deklarasi variabel iterasi i
   int sum;// deklarasi variabel sum untuk menyimpan hasil penjumlahan

   cout << "How many N do you want? "; // Menanyakan jumlah N       
   cin >> N;// menginput N
   sum = 0;// Menginisialisasi sum menjadi 0

   // Menggunakan perulangan Do-While
   i = 1;// Menginisialisasi i menjadi 1
   do {
     sum = sum + i;// Menambahkan nilai 
     i++;// Menaikkan nilai i pada perulangan 
   } while (i <= N);// Melakukan perulangan 

   cout << "The number of list = " << sum << endl;// menampilkan hasil penjumlahan 
}