#include <iostream>
using namespace std;
int main(){

    string name;
    char grade;
    char confirm;


    cout << "************** UMaT-SRID STUDENT GRADING SYSTEM **************" << '\n';
    cout << "Enter your name: \n";
    getline(std::cin >> std::ws, name);     //ws= whitespace enables one to insert the name 
                                            //including spaces
    cout << "Enter your grade: \n";
    cin >> grade;

    cout << "Your name is: " << name << '\n';
    cout << " Your grade is: " << grade << '\n';

    cout << "confirm your details above \n";
    cout << "Y/N \n";
    cin >> confirm;

    if(confirm == 'Y'){
        cout << "Proceed to the next line! \n";
    }
    else{
        cout << "Verify your details again! \n";
        return grade;
    }
    
     
    return 0;
}