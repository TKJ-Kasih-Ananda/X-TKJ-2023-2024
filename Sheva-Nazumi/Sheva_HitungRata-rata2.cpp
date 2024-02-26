#include <iostream>
using namespace std;


int main()
{
  float x;
    int i;
  float sum;
  float rerata;
  sum = 0;
  i = 0;
   cout << "masukan nilai x:";
   cin >> x;
  for (i= 0; x!=1; ++i) {
    cout << "masukan nilai x";
    cin >> x;
  }
     if (i != 0) {
       rerata = sum/i;
       cout << "masukan rerata= "<<rerata<<endl;
     }
     else {
       cout << "tidak ada data nilai ujian yang di masukan";
     }
}