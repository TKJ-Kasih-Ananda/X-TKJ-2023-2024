#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    string nama;
    int kelas;
    cout<<"hi, kamu kelas berapa?";
    cin>>kelas;
    cout<<"siapa nama kamu?";
    cin>>nama;
    if (kelas==11){
      cout<<"hi,kamu" <<nama<< "kelas 10 ya!"<<endl;
      }else
      cout<<"yah sayang sekali";
}