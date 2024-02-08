#include <iostream> // Library untuk input-output stream (Rafael)

using namespace std; // Menggunakan namespace std untuk mempermudah pemanggilan fungsi input-output (Rafael)

int main() { // Fungsi utama program (Rafael)
    int total, i = 1; // Mendeklarasikan variabel total dan i dengan tipe data integer, dan menginisialisasi i menjadi 0 (Rafael)

    // Meminta input dari pengguna untuk total (Rafael)
    cout << "Masukkan total: "; 
    cin >> total; // Mengambil nilai total dari input pengguna (Rafael)

    // Melakukan perulangan dengan do-while (Rafael)
    do {
        cout << ""<<i<< endl; // Menampilkan baris kosong (Rafael)
        i++; // Menambahkan nilai i sebanyak 1 (Rafael)
    } while (i < total); // Melakukan perulangan selama nilai i kurang dari total yang dimasukkan pengguna (Rafael)

    return 0; // Mengembalikan nilai 0, menandakan program berjalan dengan sukses (Rafael)
}
