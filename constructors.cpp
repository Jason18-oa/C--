#include <iostream>
using namespace std;

class Student{
    public:
        string name;
        int age;
        double gpa;

    Student(string name/*x*/, int age/*y*/, double gpa/*z*/){
        this->name = name;   //name = x;
        this->age = age;     //age = y;    you can use the x,y and z
        this->gpa = gpa;     // gpa = z;   to replace the this function

    }
};

int main(){

    Student student1("Emma", 19, 3.9);
    Student student2("Nanakojo", 19, 3.8) ;

    cout << student1.name << '\n';
    cout << student1.age << '\n';
    cout << student1.gpa << '\n' << '\n';

    cout << student2.name << '\n';
    cout << student2.age << '\n';
    cout << student2.gpa << '\n';
    
    
    return 0;
}