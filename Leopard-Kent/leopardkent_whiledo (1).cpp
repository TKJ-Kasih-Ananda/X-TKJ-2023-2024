#include <iostream>
using namespace std;
int main(){ //awalan
//Declaration
int N;//menyimpan jumlah
int i=1;//insialisasi
int sum;//buat menyimpan hasil penjumlahan
//algorithm
cout<<"how many N do you want? ";//menampilkan pesan
 cin>>N;//untuk ambil input
while(i<=N){ // ambil input
 sum +=1; // nambahin i ke sum
cout <<"list of num="<< sum<<endl; // menampilkan sum
i++; //incremen nilai i
 }
return 0;//
}