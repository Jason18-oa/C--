#include <iostream>
using namespace std;

int main()
{
    int choice;
    int quantity;
    double total = 0;

     
    do
    {
        cout << "\n===== DRINK MENU =====\n";
        cout << "1. Coca Cola - 10 GHS\n";
        cout << "2. Fanta - 8 GHS\n";
        cout << "3. Water - 5 GHS\n";
        cout << "4. Malt - 12 GHS\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        

        switch(choice)
        {
            case 1:
                cout << "Enter quantity: ";
                cin >> quantity;
                total += quantity * 10;
                break;

            case 2:
                cout << "Enter quantity: ";
                cin >> quantity;
                total += quantity * 8;
                break;

            case 3:
                cout << "Enter quantity: ";
                cin >> quantity;
                total += quantity * 5;
                break;

            case 4:
                cout << "Enter quantity: ";
                cin >> quantity;
                total += quantity * 12;
                break;

            case 5:
                cout << "\nFinal Bill: " << total << " GHS\n";
                cout << "Thank you for your order!\n";
                break;

            default:
                cout << "Invalid choice. Try again.\n";
        }

    } while(choice != 5);

    return 0;
}