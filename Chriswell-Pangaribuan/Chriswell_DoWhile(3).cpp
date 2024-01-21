#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main() {
  int N;
  int i;
  int sum;
    cout << "How many N do you want? ";
    cin >> N;
    sum = 0;
    for (i=1;i<=N;i++){
      sum = sum+i;
    }
    cout << "The number of list =" << sum << endl;
}