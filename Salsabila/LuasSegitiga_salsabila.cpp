#include <iostream>
using namespace std;


int main()
{
   
    int alas;
    int tinggi;
    float luas;
     cout << "Masukkan alas:";
      cin >> alas;
     cout <<"Masukkan tinggi:";
      cin >> tinggi;
       luas = 0.5*alas*tinggi;
     cout << "Luas segitiga adalah"<<luas<<endl;
     return 0;  
}