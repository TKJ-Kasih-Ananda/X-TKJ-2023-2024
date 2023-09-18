#include <iostream>
using namespace std;
int main() {
    int alas;
    int tinggi;
    float luas;
    cout << "Masukan alas : ";
    cin  >> alas;
    cout << "Masukan tinggi : ";
    cin  >> tinggi;
    luas=0.5*alas*tinggi;
    cout << "Luas segitiga adalah"<<luas<<endl;
    return 0;
}