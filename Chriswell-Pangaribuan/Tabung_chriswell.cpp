#include <iostream>
using namespace std;


int main()
{
    int r,t,v;
    float phi = 3.14;
    string dimensi;
      cout << "Masukan jari jari:";
       cin >> r;
      cout << "Masukan tinggi:";
       cin >> t;
      cout << "Masukan satuan (mm/cm/m):";
       cin >> dimensi;
      cout <<endl;
      v = phi*r*r*t;
      cout << "Volume tabung" <<v<<""<<dimensi<<"3";
       return 0;
}