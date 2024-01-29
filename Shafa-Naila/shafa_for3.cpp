#include <iostream>
using namespace std;
int main ()
{
       int banyak = 0;
   cout << "Berapa banyak yang ingin dicetak : ";
   cin >> banyak;
   for (int i = banyak;i >= 1;i--) {       for (int j = i;j >= 1;j--) {
           cout << j << " " ;
         }
        cout << endl;    }
}