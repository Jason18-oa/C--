#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    double temp, sum = 0;

    cout << "Climate Data Monitoring System\n";
    cout << "--------------------------------\n";

    cout << "Enter number of temperature readings: ";
    cin >> n;

    vector<double> temperatures;

    // Input temperature data
    for(int i = 0; i < n; i++)
    {
        cout << "Enter temperature reading " << i+1 << ": ";
        cin >> temp;

        temperatures.push_back(temp);
        sum += temp;
    }

    // Calculate average temperature
    double average = sum / n;

    cout << "\nAverage Temperature = " << average << "°C\n";

    // Detect climate warning condition
    if(average > 35)
    {
        cout << "Warning: High temperature trend detected!\n";
        cout << "Possible environmental risk.\n";
    }
    else
    {
        cout << " Temperature level is normal.\n";
    }
    


    /*double temperature;

    cout << "Enter current temperature: ";
    cin >> temperature;

    if(temperature > 40)
        cout << " Extreme Heat Warning!\n";

    else if(temperature > 35)
        cout << " High Temperature Alert\n";

    else
        cout << " Climate condition stable\n";
*/
    
    return 0;
}