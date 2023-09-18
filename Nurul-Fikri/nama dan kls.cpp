#include <iostream>
#include <string>

// ANSI escape codes for text color
#define RESET   "\033[0m"
#define RED     "\033[31m"
#define GREEN   "\033[32m"
#define YELLOW  "\033[33m"
#define BLUE    "\033[34m"

class Pelajar {
public:
    Pelajar(std::string nama, std::string kelas, int absen, std::string hobi)
        : nama(nama), kelas(kelas), absen(absen), hobi(hobi) {}

    void info() {
        std::cout << GREEN << "Nama: " << nama << RESET << std::endl;
        std::cout << BLUE << "Kelas: " << kelas << RESET << std::endl;
        std::cout << YELLOW << "Absen: " << absen << RESET << std::endl;
        std::cout << RED << "Hobi: " << hobi << RESET << std::endl;
    }

private:
    std::string nama;
    std::string kelas;
    int absen;
    std::string hobi;
};

int main() {
    Pelajar pelajar1("Fikri", "10 tkj", 20, "Bermain game");
    Pelajar pelajar2("toya", "10 tkj", 6, "bengong ");

    std::cout << "Informasi Pelajar 1:" << std::endl;
    pelajar1.info();

    std::cout << "\nInformasi Pelajar2:" << std::endl;
    pelajar2.info();

    return 0;
}
