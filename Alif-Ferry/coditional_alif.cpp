#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
  double a,b,c;
     cout <<"masukan nilai a:";
     cin >>a;
     cout <<"masukan nilai b:";
     cin >>b;
     cout <<"masukan nilai c:";
     cin >>c;
  if (a == b && b == c){
     cout<<"segitiga sama sisi"<<endl;
  }
  else if(a == b || a == c || b == c){
     cout<<"segitiga sama kaki"<<endl;
  }
  else {
     cout<<"segitiga sembarang"<<endl;
  }
  return 0;
}