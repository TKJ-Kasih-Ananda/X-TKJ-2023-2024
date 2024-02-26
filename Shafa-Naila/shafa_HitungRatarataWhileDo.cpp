#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    double x;
    int i;
    double sum;
    double rerata; 
    sum = 0;
    i = 0;
    cout<< "masukkan x";
    cin>> x;
    while (x!=1) {
      i = i+1;
      sum = sum + x;
      cout << "masukkan x";
      cin>> x;
      }
    if (i != 0) {
       rerata = sum/i;
       cout<< "masukkan rerata";
       }
    else{
       cout<<"tidak ada data nilai ujian yang dimasukkan";   
    }   
}