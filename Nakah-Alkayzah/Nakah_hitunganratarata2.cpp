#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
 float x;
 int i;
 float sum;
 float rerata;
 sum=0;
 i=0;
 cout<<"masukkan nilai x";
 cin>>x;    
 for(i=0;x!=i;i=i+1);
 {
   sum=sum+x;   
 cout<<"masukkan nilai x";
 cin>>x;
 }
 if (i!=0){
 rerata=sum/i;
 cout<<"masukkan rerata= "<<rerata<<endl;
 }
 else{
 cout<<"tidak ada data nilai ujian yang dimasukkan";
 }
 }