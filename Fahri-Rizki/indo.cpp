#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    cout << "Hello, Dcoder!";
}
#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int r,t,v;
    float phi =3.14;
    string dimensi;
    cout<<"masukan jari-jari:";
     cin>> r;
    cout<<"masukan tinggi:";
     cin>>t;
    cout<< "masukan satuan (mm/cm/m):";
     cin>>dimensi;
    cout<< endl;
    v = phi*r*r*t;
    cout<< "volume tabung="<<v<<"" <<dimensi<<"3";
    return 0;
}