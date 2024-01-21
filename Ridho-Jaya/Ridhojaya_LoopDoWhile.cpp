#include <iostream>

using namespace std;

int main() {
    // Inisialisasi variabel x
    int x = 0;

    // Loop do-while pertama untuk variabel x
    do {
        // Inisialisasi variabel y
        int y = 0;

        // Loop do-while kedua untuk variabel y
        do {
            // Menampilkan nilai x dan y ke layar
            cout << "x = " << x << ", y = " << y << endl;

            // Increment variabel y
            y++;
        } while (y < 3); // Melakukan iterasi selama y kurang dari 3

        // Increment variabel x
        x++;
    } while (x < 3); // Melakukan iterasi selama x kurang dari 3

    return 0;
}