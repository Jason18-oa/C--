#include <iostream>

int main(){

   
    int age; 
    
    std::cout << "Enter your age: ";
    std::cin >> age;

    if(age >= 18){
        std::cout << "welcome to the site!";
    }
    else if (age < 0){
        std::cout << "You haven't been born yet!";
    }
    else if (age == 0){
       std::cout << "You were just given birth to!";
    }
    else{
        std::cout << "You are not old enough to access this site!";
    }
    



   return 0;
}