#include<iostream>
using namespace std;

int main(){

    string firstName;         //code which accepts user 
    string middleName;        //input to display their first name
    string surName;           //middle name and surname

    cout << "Type your first name: \n";
    cin >> firstName;

    cout << "Type your middle name: \n";
    cin >> middleName;

    cout << "Type your Surname: \n";
    cin >> surName;

                     //double quote is placed b/n the names to create spaces b/n them
    string name = firstName + " " + middleName + " " + surName;
    cout << "You are: " << name;       


    return 0;
}