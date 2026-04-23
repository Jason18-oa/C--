#include <iostream>
using namespace std; 
enum Day{Sunday = 0, Monday = 1, Tuesday = 2, Wednesday = 3,
          Thursday = 4, Friday = 5, Saturday = 6};

          

int main (){

    Day today = Friday;

    switch(today){
        case Sunday: cout << "It's Sunday!\n";
                       break;
        case Monday: cout << "It's Monday!\n";
                       break;
        case Tuesday: cout << "It's Tuesday!\n";
                       break;
        case Wednesday: cout << "It's Wednesday!\n";
                       break;
        case Thursday: cout << "It's Thursday!\n";
                       break;
        case Friday: cout << "It's Friday!\n";
                       break;
        case Saturday: cout << "It's Saturday!\n";
                       break;
    }



    return 0;
}