#include <iostream> // Library untuk input-output stream (Rafael)

using namespace std; // Untuk mempermudah penggunaan fungsi dari namespace std (Rafael)

int main() { // Fungsi utama program (Rafael)
    int total, i = 0; // Variabel total untuk menyimpan jumlah baris yang diinginkan, dan i sebagai penghitung (Rafael)

    // Meminta input dari pengguna untuk total baris yang diinginkan (Rafael)
    cout << "Masukkan total baris yang ingin ditampilkan: "; 
    cin >> total; // Mengambil nilai total dari input pengguna (Rafael)

    // Melakukan perulangan dengan while untuk menampilkan baris kosong sebanyak total yang dimasukkan pengguna (Rafael)
    while (i < total) {
        cout << endl; // Menampilkan baris kosong (Rafael)
        i++; // Menambahkan nilai i sebanyak 1 setiap kali perulangan dilakukan (Rafael)
    }

    return 0; // Mengembalikan nilai 0, menandakan bahwa program telah selesai dijalankan dengan sukses (Rafael)
}
