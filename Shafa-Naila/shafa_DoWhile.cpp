#include <conio.h>
#include <iostream>
using namespace std;
int main() {

  int n=1;
  float jum=0;

  do {
        cout<<""<<n;
        cout<<", ";
        jum+=n;
        n+=3;
     } while (n<=10);

  cout<<""<<endl;
  cout<<""<<endl;;
  cout<<"Jumlah : "<<jum<<endl;;
  getch();
}