#include <iostream>
using namespace std;

void Swap(string &a, string &b){
     //include Ampersand to initiate the call by reference 
     //which swaps the values of x and y
     // without the ampersand it is the call by value 
     //which does not swap the values of x and y
    string temp = a;
    a = b;
    b = temp;
}
int main(){
    string x = "water";
    string y = "Fanta";

    Swap(x, y);
    cout << "After Swap: x=" << x << '\n' << "y=" << y << '\n';

    return 0;
}