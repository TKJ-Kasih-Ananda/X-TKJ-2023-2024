#include <iostream>//perintah yang digunakan untuk memasukkan header file iostream ke dalam program yang sedang dikembangkan.
using namespace std;//untuk mendeklarasikan/ memberitahukan kepada compiler bahwa kita akan menggunakan semua fungsi/class/file yang terdapat dalam namespace std.

int main() {//jenis tipe data yang akan dikembalikan nilainya kembali. 
    int a = 1, sum = 0;//tipe data
    do {
        int b = 3, selisih = 10;//condition
        do {
            selisih -= b;//variable
            b--;
            cout << "Selisih  " << selisih << "\n";//untuk output ke layar. 
        } while (b >= 1);
        sum += a;//variable
        a++;
        cout << "Jumlah " << sum << "\n";//untuk output ke layar. 
    } while (a <= 4);
    return 0;//program akan mengembalikan (return) nilai 0 ke operating system yang menjalankan program tersebut.
}
