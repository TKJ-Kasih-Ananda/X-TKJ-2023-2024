#include <iostream>
int main() {
    // Program coba_whiledo
    int total, i = 0;  // Inisialisasi integers
    std::cout << "masukin total: ";
    std::cin >> total;  // total input
    // whiledo loop
 do {
  std::cout << std::endl;  // Output
    ++i;
 } while (i < total);
 return 0;
}