#include <iostream>//program iostream
using namespace std;// supaya tidak menulis std lagi

int main(){ //memulai program utama
//Declaration
int N;//N = menyimpan jumlah
int i=1;//i = insialisasi
int sum;// sum = menyimpan hasil penjumlahan
//algorithm
  cout<<"how many N do you want? ";//menampilkan pesan untuk penginputan user
 
 cin>>N;//mengambil input dari pengguna

while(i<=N){ // mengambil input dari pengguna
   sum +=1; // menambahkan variabel i ke sum
   cout <<"list of num="<< sum<<endl; // menampilkan nilai sum
   i++; //incremen nilai i
  }

}