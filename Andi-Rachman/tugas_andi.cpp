#include <iostream>
#include <string>
using namespace std;

// Fungsi untuk mengatur warna konsol
void setConsoleColor(int colorCode) {
    // Menggunakan kode ANSI untuk mengatur warna
    cout << "\033[1;" << colorCode << "m";
}

// Fungsi untuk mengembalikan warna konsol ke warna default
void resetConsoleColor() {
    cout << "\033[0m";
}

int main() {
    // Deklarasi variabel
    string nama, kelas, hobi;
    int absen;

    // Meminta pengguna untuk memasukkan data
    cout << "Masukkan nama: ";
    getline(cin, nama);

    cout << "Masukkan kelas: ";
    getline(cin, kelas);

    cout << "Masukkan nomor absen: ";
    cin >> absen;
    cin.ignore();  // Membersihkan buffer

    cout << "Masukkan hobi: ";
    getline(cin, hobi);

    // Mengatur warna konsol sebelum menampilkan data
    setConsoleColor(36); // Warna cyan
    cout << "\nData Anda:\n";
    resetConsoleColor(); // Mengembalikan ke warna default

    cout << "Nama: " << nama << endl;
    cout << "Kelas: " << kelas << endl;

    // Mengatur warna konsol untuk nomor absen
    setConsoleColor(33); // Warna kuning
    cout << "Nomor Absen: " << absen << endl;
    resetConsoleColor(); // Mengembalikan ke warna default

    cout << "Hobi: " << hobi << endl;

    return 0;
}

