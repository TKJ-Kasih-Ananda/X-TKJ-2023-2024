#include <iostream>//menggunakan program dari iostream
using namespace std;//agar tidak menulis std lagi

int main(){ //memulai program utama
//Declaration
int N;//variabel N untuk menyimpan jumlah
int i=1;//variabel i untuk insialisasi
int sum;//variabel sum untuk hasil penjumlahan
//algorithm
  cout<<"how many N do you want? ";//menampilkan pesan 
 
  cin>>N;//masukan input dari user

 do{ // looping do
   sum +=1; // menambabkan i ke sum
   cout <<"list of num="<< sum<<endl; // menampilkan nilai sum
   i++; //increment nilai i
}  while(i<=10);// melakukan loop selama i kurang atau sama dengan 10
  
 
}