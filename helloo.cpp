#include <iostream> 

using namespace std;

    // cout << (insertion operator)
    // cin >> (extraction operator)

int main() 
{ 
    std::string name;
    int age;

    std::cout << "What's your age?: ";
    std::cin >> age;

    std::cout << "Please enter your full name: "; 
    std::getline(std::cin >> std::ws, name);


    std::cout << "Hello " << name << endl;
    std::cout << "You are " << age << "years old"; 
 


    return 0;

}