#include <iostream>
using namespace std;

void try_switch(int day_code) 
{
    switch(day_code) 
    {
        case 1:
           cout << "monday";
           break;
        case 2:
           cout << "tuesday";
           break;
        case 3:
           cout << "wednesday";
           break;
        case 4:
           cout << "thursday";
           break;
        case 5:
           cout << "friday";
           break;
        case 6:
           cout << "saturday";
           break;
        case 7:
           cout << "sunday";
           break;
        default:
            cout << "input code mismatch!";
     }
}

int main() 
{
  
    int day_code;
  
    cout << "enter day code: ";
    cin >> day_code;
    
    try_switch(day_code);
    
    return 0;
}