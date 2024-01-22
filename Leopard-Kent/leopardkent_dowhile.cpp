#include <iostream>
using namespace std;
int main(){ //start program
//Declaration
int N;//buat nyimpan jumlah
int i=1;//variabel i iniliasasi
int sum;// untuk menyimpan hasil
//algorithm
cout<<"how many N do you want? ";//untuk meminta input
cin>>N;//mengambil input
while(i<=N){ // mengambil input
sum +=1; // menambabkan i
cout <<"list of num="<< sum<<endl; // menampilkan sum
i++; //buat increment
  }
return 0;
}