#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    string nama;
    int kelas;
    cout << "hi, kamu kelas berapa?:D";
    cin >> kelas;
    cout << "siapa nama kamu?:D";
    cin >> nama;
    if (kelas==10) {
      cout << "hi,kamu "<<nama<<" kelas 10 ya!:D"<<endl;
      }
    else if (kelas==11) {
      cout << "cie dah kelas 11 :D ";
      }
    else {
      cout << "waduh gaa terdeteksi T-T ";
    }
}
