#include <iostream>
using namespace std;


int main()
{
    int p,l,t,v;
    string dimensi;
    cout << "masukan panjang:";
     cin >> p;
    cout << "masukan lebar:";
     cin >> l;
    cout << "masukan tinggi";
     cin >> t;
    cout << "masukan satuan (mm/cm/m)";
     cin >> dimensi;
    cout <<endl;
    v = p*l*t;
    cout << "volume balok"<<v<<""<<dimensi<<"3";
    return 0;
    }