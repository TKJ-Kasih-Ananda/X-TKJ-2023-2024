#include <iostream>//perintah yang digunakan untuk memasukkan header file iostream ke dalam program yang sedang dikembangkan.
using namespace std;//untuk mendeklarasikan/ memberitahukan kepada compiler bahwa kita akan menggunakan semua fungsi/class/file yang terdapat dalam namespace std.

int main() {//jenis tipe data yang akan dikembalikan nilainya kembali. 
    int sum = 0;//untuk initialization
    for (int a = 1; a <= 4; a++) {//untuk increment
        int selisih = 10;//untuk condition
        for (int b = 3; b >= 1; b--) { //statement
            selisih -= b;//variable
            cout << "Selisih " << selisih << "\n";//untuk output ke layar.
        }
        sum += a;//variable
        cout << "Jumlah " << sum << "\n";//untuk ouput ke layar
        
    }
    return 0;//program akan mengembalikan (return) nilai 0 ke operating system yang menjalankan program tersebut.
}
