#include <iostream>
using namespace std;

int main()
{
    const int MAX = 100;         // declared the max number of drinks to be 100

    int drinkChoice[MAX];         //used arrays from lne 8 to 11 
    int quantity[MAX];             //to store the choices, quantity
    double price[MAX];             // and price of the drinks ordered by the user
    double total = 0;

    int numberOfItems;

    cout << "===== DRINK ORDER SYSTEM =====\n";
    cout << "How many different drinks do you want to order? ";
    cin >> numberOfItems;

    for(int i = 0; i < numberOfItems; i++)
    {
        cout << "\nSelect Drink " << i+1 << endl;
        cout << "1. Coca Cola - 10 GHS\n";
        cout << "2. Fanta - 8 GHS\n";         // set of choices for the user to select from
        cout << "3. Water - 5 GHS\n";
        cout << "4. Malt - 12 GHS\n";
        cout << "5. Belcola - 4 GHS\n";
        cout << "Enter choice: ";
        cin >> drinkChoice[i];

        cout << "Enter quantity: ";
        cin >> quantity[i];

        switch(drinkChoice[i])
        {
            case 1:
                price[i] = 10;
                break;
            case 2:
                price[i] = 8;
                break;
            case 3:
                price[i] = 5;
                break;
            case 4:
                price[i] = 12;
                break;
            case 5:
                price[i] = 4;
                break;
            default:
                cout << "Invalid choice. Setting price to 0.\n";
                price[i] = 0;
        }

        total += price[i] * quantity[i];
    }

    //  PRINT RECEIPT
    cout << "\n===== RECEIPT =====\n";

    for(int i = 0; i < numberOfItems; i++)
    {
        cout << "Item " << i+1 
             << " | Qty: " << quantity[i] 
             << " | Cost: " << price[i] * quantity[i] 
             << " GHS\n";
    }

    cout << "-------------------------\n";
    cout << "TOTAL BILL: " << total << " GHS\n";
    cout << "Thank you for ordering!\n";

    return 0;
}