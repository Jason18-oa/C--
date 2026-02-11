#include <iostream>

int main (){
    const double PI = 3.14159;
    const int LIGHT_SPEED = 30000000;
    const int WIDTH = 50;
    double x = 23.3;
    double y = 3;
    double z = 2;
    
    double radius = 10;
    double circumference = 2 * PI * radius;
    double multiplication = x * y + z;


    std::cout << circumference << "cm" <<std:: endl; 
    std::cout << LIGHT_SPEED << std :: endl;
    std::cout << WIDTH  <<std :: endl;
    std ::cout << multiplication << std :: endl; 
    
    return 0;
}