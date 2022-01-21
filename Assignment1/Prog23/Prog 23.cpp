#include <iostream>
#include <iomanip>
using namespace std;

void printInv(int x, string y[])
{
    cout << "Your current inventory contains:" << endl;
    for (int i = 0; i < x; i++)
        cout << y[i] << "\n";
}

int main()
{
    const int MAX_ITEMS = 4;
    int numItems = 0;
    string inventory[MAX_ITEMS];
    inventory[numItems++] = "sword";
    inventory[numItems++] = "battle axe";
    inventory[numItems++] = "healing potion";
    inventory[numItems++] = "dagger";

    string userInput;
    printInv(MAX_ITEMS, inventory);
    cout << "\n";
    cout << "You have found a wizard's staff." << endl;
    cout << "\n";
    cout << "Would you like to replace your dagger with this staff?" << endl;
    cout << "Please type 'yes' or 'no'." << endl;
    cin >> userInput;

    bool userLoop = true;

    
    while(userLoop)
    {
        if (userInput == "yes" || userInput == "Yes" || userInput == "y" || userInput == "Y")
        {
            inventory[3] = "wizard's staff";
            cout << "\n";
            cout << "You have discarded your dagger and picked up the staff." << endl;
            cout << "\n";
            printInv(MAX_ITEMS, inventory);
            userLoop = false;
        }

        else if (userInput == "no" || userInput == "No" || userInput == "n" || userInput == "No")
        {
            cout << "\n";
            cout << "You have left the staff behind." << endl;
            cout << "\n";
            printInv(MAX_ITEMS, inventory);
            userLoop = false;
        }

        else
        {
            cout << "Please type 'yes' or 'no'." << endl;
            cin >> userInput;
        }
    }
}