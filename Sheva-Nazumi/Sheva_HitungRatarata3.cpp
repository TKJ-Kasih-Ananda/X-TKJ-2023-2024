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
  cout <<"masukan nilai x";
     cin >> x;
   do {
     cout <<"masukan nilai x";
     cin >> x;
     sum = sum + x;
     i = i + 1;
  } while (x != 1);
   
 
   
     if (i!=0){
       rerata = sum/i;
       cout << "masukan rerata= "<<rerata<<endl;
     }
     else {
       cout << "tidak ada data nilai ujian yang di masukan";
     }
}