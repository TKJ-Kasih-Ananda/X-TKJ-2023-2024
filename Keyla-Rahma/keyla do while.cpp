#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main () {
  int N ;
  int i ;
  int sum ;
  cout << "how many N do you want ?" ;
  cin >> N ;
  sum = 0 ;
  i = 1 ;
  do {
    sum = sum + i ;
    i++ ; 
    }
  while (i <= N ) ;    
    cout << "the number of list " << sum << endl ;
  }