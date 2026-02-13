#include <iostream>
#include <ctime>

// This program simulates a random event where the user can
// win different prizes based on a random number generated.


int main(){

    srand(time(0));
    int randNum = rand() % 5 + 1;

    switch(randNum){
        case 1: std::cout << "You win a gold medal!\n" ;
                break;
        case 2: std::cout << "You win a silver medal!\n" ;
                break;
        case 3: std::cout<< "You win a bronze medal!\n" ;
                break;  
        case 4: std::cout << "You win a consolation prize!\n" ;
                break;  
        case 5:std::cout << "You win a participation certificate!\n" ;
                break;
        
    
    }



    return 0;  
}