#include <iostream>

int main(){
    
    int num;
    int guess;
    int tries;

    srand(time(0));
    num = (rand() % 100) + 1;

    std::cout<< "********** WELCOME TO THE NUMBER GUESSING GAME **********\n";
  
    do{
        std::cout << "Enter a guess between (1-100): ";
        std::cin >> guess;
        tries++;

        if (guess > num){
            std::cout << "Too high! Try again.\n";
        }
        else if (guess < num){
            std::cout << "Too low! Try again.\n";
        }
        else {
            std::cout << "Congratulations! You guessed the number in " << tries << " tries!\n";
        }

    }while(guess != num);

    std::cout<< "********************** THANK YOU FOR PLAYING! **********************\n";

    return 0;
}