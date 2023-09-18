#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int alas;
    int tinggi;
    float luas;
    cout << "masukkan alas";
     cin >> alas;
    cout <<"masukkan tinggi:";
     cin >> tinggi;
     luas = 0.5*alas*tinggi;
    cout << "luas segitiga adalah"<<luas<<endl;
    return 0;
}