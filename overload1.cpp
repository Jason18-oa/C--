#include<iostream>

void bakePizza();
void bakePizza(std::string topping1);
void bakePizza(std::string topping1, std::string topping2);
void bakePizza(std::string topping1, std::string topping2, std::string topping3);

int main(){

    bakePizza("Tomato, Mozzarella and Basil");


    return 0;
}

void bakePizza(){
    std::cout << "Here is your pizza!\n";

}
void bakePizza(std::string topping1){
    std::cout << "Here is your " << topping1 << " pizza!\n";
}
void bakePizza(std::string topping1, std::string topping2){
    std::cout << "Here is your " << topping1 << " and " << topping2 << " pizza!\n";
}
void bakePizza(std::string topping1, std::string topping2, std::string topping3){
    std::cout << "Here is your " << topping1 << ", " << topping2 << " and " << topping3 << " pizza!\n";
}