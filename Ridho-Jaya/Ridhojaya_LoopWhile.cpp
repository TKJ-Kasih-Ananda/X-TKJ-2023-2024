#include <iostream>
using namespace std;

int main() {
    int x = 0;
    // Loop while x jika kurang dari 3
    while (x < 3) {
      
        int y = 0;
        // Loop while y jika kurang dari 3
        while (y < 3) {
          
            // Menampilkan nilai x dan y ke layar
            cout << "x = " << x << ", y = " << y << endl;
            y++;  // Increment y
        }
        x++;  // Increment x
    }
    return 0;
}