#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main()
{
    int N;
    int i;
    int sum;
    cout<<"how many N do you want?";
    cin>>N;
    sum=0;
    while(i<=N){
    cout<<"the number of list ="<<sum<<endl;
    i++;
    sum=sum+1;
    }
    return 0;
}