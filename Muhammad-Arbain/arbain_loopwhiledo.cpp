#include <iostream>

int main() {
    int jumlahBaris;

    std::cout << "Masukkan jumlah baris: ";
    std::cin >> jumlahBaris;

    int i = jumlahBaris;
    do {
        int j = 1;
        do {
            std::cout << "aku kaya ";
            ++j;
        } while (j <= i);
        std::cout << std::endl;
        --i;
    } while (i >= 1);

    return 0;
}