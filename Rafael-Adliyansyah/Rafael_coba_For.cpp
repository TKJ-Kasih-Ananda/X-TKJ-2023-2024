#include <iostream> // Library yang digunakan untuk input-output (Rafael)

using namespace std; // Digunakan untuk mempermudah penggunaan fungsi dari namespace std (Rafael)

int main() { // Fungsi utama dari program (Rafael)
    int total; // Variabel untuk menyimpan jumlah baris yang ingin ditampilkan (Rafael)

    // Meminta pengguna untuk memasukkan jumlah baris yang diinginkan (Rafael)
    cout << "Masukkan total baris yang ingin ditampilkan: "; 
    cin >> total; // Pengguna diminta untuk memasukkan jumlah baris yang diinginkan (Rafael)

    // Melakukan perulangan dengan for untuk menampilkan baris kosong sebanyak total yang dimasukkan pengguna (Rafael)
    for (int i = 0; i < total; i++) {
        cout << endl; // Menampilkan baris kosong (Rafael)
    }

    return 0; // Mengembalikan nilai 0, menandakan program selesai dijalankan dengan sukses (Rafael)
}
