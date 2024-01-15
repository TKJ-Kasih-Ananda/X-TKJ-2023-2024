#include <iostream>
using namespace std;

//Compiler version g++ 6.3.0

int main(){

    int deret,n,i;

    cout<<"masukan jumlah deret angka yang diinginkan: ";
    cin>>deret;

    for (n=1;n<=deret;n++){
        for (i=1;i<=n*2;i=i+2){
            cout<<i<<" ";
            };
        cout<<endl;
        };
return(0);
}