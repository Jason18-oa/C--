#include <iostream>

int main(){

    //pseudo-random number generator

    srand(time(0));

    int num1 = (rand() % 6 + 1);
    int num2 = (rand() % 6 + 1);
    int num3 = (rand() % 6 + 1);

    std::cout << num1 << " "  << '\n'<< num2 << " " <<'\n' << num3 ;


    
    


    return 0;
}