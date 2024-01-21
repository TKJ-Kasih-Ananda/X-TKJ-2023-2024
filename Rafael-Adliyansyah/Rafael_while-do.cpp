#include <iostream>
using namespace std;

int main(){ //memulai program utama
//Declaration
int N;//variabel N untuk menyimpan jumlah
int i=1;//variabel i insialisasi
int sum;//variabel sum menyimpan hasil penjumlahan
//algorithm
  cout<<"how many N do you want? ";//menampilkan pesan untuk meminta input dari pengguna
 
 cin>>N;//mengambil input dari pengguna

while(i<=N){ // mengambil input dari pengguna
   sum +=1; // menambabkan i ke sum
   cout <<"list of num="<< sum<<endl; // menampilkan nilai sum
   i++; //incremen nilai i
  }
return 0;//
}
