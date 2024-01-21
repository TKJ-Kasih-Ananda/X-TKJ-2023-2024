#include <iostream>//menggunakan fungsi fungsi iostream
using namespace std;//agar tidak menulis STD ulang

int main(){ //memulai program utama
//Declaration
int N;//variabel N untuk menyimpan jumlah
int i=1;//variabel i insialisasi
int sum;//variabel sum menyimpan hasil penjumlahan
//algorithm
  cout<<"how many N do you want? ";//menampilkan pesan untuk meminta input dari pengguna
 
  cin>>N;//mengambil input dari pengguna

 do{ // looping do
   sum +=1; // menambabkan i ke sum
   cout <<"list of num="<< sum<<endl; // menampilkan nilai sum
   i++; //incremen nilai i
}  while(i<=10);// melakukan loop selama i kurang atau sama dengan N
  
 return 0;//tanda program berhasil berakhir
}
