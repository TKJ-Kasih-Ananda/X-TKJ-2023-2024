#include <iostream>//menggukan sistem iostream 
using namespace std; // agar tidak mengulang sistem

int main(){ //memulai program awal
//Declaration
int N;//variabel N untuk menghasilkan jumlah
int i=1;// insialisasi
int sum;//variabel sum menjumlahkan hasil penjumlahan
//algorithm
  cout<<"how many N do you want? ";// untuk meminta input dari pengguna
 
 cin>>N;//mengambil input dari pengguna

while(i<=N){ // mengambil input dari pengguna
   sum +=1; // menambabkan i ke sum
   cout <<"list of num="<< sum<<endl; // menampilkan nilai sum
   i++; //incremen 
  }

}