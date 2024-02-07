#include <iostream>
int main() {
    int total, i = 0;  // Inisialisasi total integers
    std::cout << "masukan total: ";
    std::cin >> total;  // total for
  // do-while loop
  do {
  std::cout << std::endl;  // Output
  ++i;
    } while (i < total);
  return 0;
}