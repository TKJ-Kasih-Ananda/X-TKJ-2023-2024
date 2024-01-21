#include <iostream>
using namespace std;

int main() {
    int N;
    int i = 1;
    // Menginisialisasi sum dengan 0
    int sum = 0;
    cout << "How many N do you want? ";
    cin >> N;
    // Melakukan pengulangan do-while
    do {
      // Menambahkan 1 pada sum
        sum = sum + 1;
        i++;
        // Melanjutkan iterasi selama i kurang dari atau sama dengan N
    } while (i <= N);
    // Menampilkan hasil
    cout << "The number of list = " << sum << endl;
     
    return 0;
}