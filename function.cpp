#include <iostream>

//function = a block of reusable code


void happyBirthday(std::string name){
    std::cout <<"Happy Birthday to you\n";  
    std::cout <<"Happy Birthday to you\n" ;
    std::cout <<"Happy Birthday dear " << name << '\n'; 
    std::cout <<"Happy Birthday to you\n" ;
}

int main(){
    
    std::string name = "Diya";
    happyBirthday(name);
    

    return 0;
}