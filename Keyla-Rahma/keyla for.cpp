#include <iostream> // perintah yang digunakan untuk memasukkan header file iostream ke dalam program yang sedang dikembangkan.
using namespace std; // seluruh baris kode dalam berkas terkait secara default akan menggunakan kelas, metode, atribut dari namespace std .

//Compiler version g++ 6.3.0

int main () { // fungsi utama dan merupakan fungsi yang akan dieksekusi pertama kali.
     int N ; //deklarasi 
     int i ; //deklarasi 
     int sum ; //deklarasi 
     cout <<"how many N do you want? " ; //output 
     cin >> N ; // input 
     sum = 0 ; // anuannya bu tidak tahu saya
     for (i=1 ; i <= N ; i++ ) { // initialization, condition, and increment
       sum = sum +i; // statemen 
     }
     cout << "tge number of list" << sum << endl; // output 
     }