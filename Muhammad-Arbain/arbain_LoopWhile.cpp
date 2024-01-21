#include <iostream>

int main() {
    int jumlahBaris;

    std::cout << "Masukkan jumlah baris: ";
    std::cin >> jumlahBaris;

    int i = jumlahBaris;
    while (i >= 1) {
        int j = 1;
        while (j <= i) {
            std::cout << "aku kaya ";
            ++j;
        }
        std::cout << std::endl;
        --i;
    }

    return 0;
}