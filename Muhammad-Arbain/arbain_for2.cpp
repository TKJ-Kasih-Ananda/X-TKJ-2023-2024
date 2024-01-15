#include <iostream>

int main() {
    int jumlahBaris;

    std::cout << "Masukkan jumlah baris: ";
    std::cin >> jumlahBaris;

    for (int i = jumlahBaris; i >= 1; --i) {
        for (int j = 1; j <= i; ++j)
            std::cout << "aku kaya ";

        std::cout << std::endl;
    }

    return 0;
}