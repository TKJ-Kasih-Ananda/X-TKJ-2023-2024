#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    float phi=3.14;
    int r,t,v;
    string dimensi;
  
    cout<<"masukan r:";
    cin>>r;
    cout<<"masukan t:";
    cin>>t;
    cout<<"masukan satuan(mm/cm/m):";
    cin>>dimensi;
    cout<<endl;
    v=phi*r*r*t;
    cout<<"volume tabung="<<v<<""<<dimensi<<"3";
    return 0;
}