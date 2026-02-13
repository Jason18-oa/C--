#include <iostream>
#include <ctime>

//This program simulates a random event where the user can
//win different prizes based on a random number generated.

int main(){

    srand(time(0));
    int randNum = rand() % 5 + 1;

    switch(randNum){
        case 1: std::cout << "You won a new character!\n" ;
                break;
        case 2: std::cout << "You obtained 20 Diamonds!\n" ;
                break;
        case 3: std::cout<< "You won 2500 gold coins!\n" ;
                break;  
        case 4: std::cout << "You won a power buff!\n" ;
                break;  
        case 5:std::cout << "Better luck next time!\n" ;
                break;
        
    
    }



    return 0;  
}