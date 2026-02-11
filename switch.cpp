#include <iostream>

int main(){
    
    //switch

    int month;
    std::cout << "Enter the month (1-7): ";
    std::cin >> month;

    switch(month){ 
        case 1:
           std::cout << "It is January";
           break;
        case 2:
           std::cout << "It is February";
           break;
        case 3:
           std::cout << "It is March";
           break;
        case 4:
           std::cout << "It is April";
           break;
        case 5:
           std::cout << "It is May";
           break;
        case 6:
           std::cout << "It is June";
           break;
        case 7:
           std::cout << "It is July";
           break;
        default:
           std::cout << "Please enter in only numbers (1-7)";
        
    }  

    return 0;
}