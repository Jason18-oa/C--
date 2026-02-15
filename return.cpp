#include <iostream>

double square(double length);


std::string concatStrings(std::string string1, std::string string2);

int main(){

    //return = return a value back to the spot 
    //         where you called the encompassing function

    std::string firstName = "El";
    std::string lastName = "Jason";
    std::string fullName = concatStrings(lastName, firstName);

    std::cout << "Hello " << fullName << std::endl;

   return 0; 
}
std::string concatStrings(std::string string1, std::string string2){
    return string1 + " " + string2;
}