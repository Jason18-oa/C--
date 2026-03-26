#include<iostream>
using namespace std;

int main(){

   /*int correct = 8;
    int questions = 10;
    double score = (double)correct/questions * 100;

    cout << score << "%";
    */
   int appliance;
   double power;
   int usage;
   int days;

   cout << "Enter the number of appliances: \n";
   cin >> appliance;

   cout << "Enter the power rating of the appliance: \n";
   cin >> power;

   cout << "Enter the number days used and the daily usage: \n";
   cin >> usage >> days;

   double Energy;
   Energy = (power*appliance*days)/usage;

   cout << "The total energy consumption is: " << Energy << "KW/h";
   
   return 0;
}