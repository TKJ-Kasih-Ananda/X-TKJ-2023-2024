#include <iostream> // include necessary header of input/output operation
using namespace std;

int main()
{
  //Decleration
   int N; //decleration value of N
   int i; //decleration value of i
   int sum; //decleration variabel sum to store the sum of number
   //Algoritma 
   cout << "How many N do you want? "; //asking the number of N/interaction
   cin >> N; //read user input and store it in N
   
   sum = 0; //initialize sum to 0
   i = 1; //initialize i to 1 before entering the loop
   while (i <= N){
     sum = sum + i; //add the current value of i to sum
     i++; //increment i in each iteration of the loop
   }
   cout << "The number of list = " << sum << endl; //display the sum of numbers
}