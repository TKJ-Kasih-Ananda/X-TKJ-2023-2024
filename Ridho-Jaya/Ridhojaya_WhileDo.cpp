#include <iostream>
using namespace std;

int main() {
    int N;
    int i = 1;
    // Menginisialisasi sum dengan 0
    int sum = 0;
    cout << "How many N do you want? ";
    cin >> N;

    while (i <= N) {
      // Menambahkan 1 pada sum
        sum = sum + 1;
        i++;
    }
    // Menampilkan hasil
    cout << "The number of list = " << sum << endl;
    
    return 0;
}