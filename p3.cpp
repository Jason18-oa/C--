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

        if(choice == 5)
        {
            cout << "Thank you for your order!\n";
            break;
        }

        cout << "Enter quantity: ";
        cin >> quantity;

        switch(choice)
        {
            case 1:
                total += quantity * 10;
                break;

            case 2:
                total += quantity * 8;
                break;

            case 3:
                total += quantity * 5;
                break;

            case 4:
                total += quantity * 12;
                break;

            default:
                cout << "Invalid choice!\n";
                continue;
        }

        //  TOTAL APPEARS IMMEDIATELY
        cout << "Current Total Bill: " << total << " GHS\n";

    } while(true);

    return 0;
}