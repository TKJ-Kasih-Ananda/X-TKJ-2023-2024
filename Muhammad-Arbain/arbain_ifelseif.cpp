#include <iostream> 
 using namespace std; 
  
 int main(){ 
    string nama; 
   int kelas; 
   cout<<"hai,kamu kelas berapa?"; 
   cin>>kelas; 
   cout<<"siapa nama kamu?"; 
   cin>>nama; 
   if(kelas==10){ 
     cout<<"hai,kamu"<<nama<<"kelas 10 ya!"<<endl; 
     } 
     else if(kelas==11){ 
       cout<<"cie dah kelas 11"; 
       } 
       else{ 
     cout<<"waduh ga terdeteksi";  
     } 
 }