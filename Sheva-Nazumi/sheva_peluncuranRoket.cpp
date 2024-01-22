#include <iostream>
#include <unistd.h>
using namespace std;
int main()
{
    int i;
    cout << "Hitung mundur peluncuran roket "<<endl;
    sleep(1);
    for (i = 5; i>= 0; i--) {
      cout << i << endl;
      sleep (1);
    }
    cout << "GO!";
    return 0;
}