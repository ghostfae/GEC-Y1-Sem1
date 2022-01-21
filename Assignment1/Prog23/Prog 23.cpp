#include <iostream>
#include <iomanip>
using namespace std;
using std::setw;

int printInv(int x, string y[])
{
    cout << "Your current inventory contains:" << endl;
    for (int i = 0; i < x; i++)
        cout << ""; // TODO: fix this
    return 0;
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
    for (int i = 0; i < 4; i++)
        cout << inventory[i] << "\n";

    string userInput;
    cout << "Your current inventory contains: " << endl;

    cout << "You have found a wizard's staff." << endl;
    cout << "Would you like to replace your dagger with this staff?" << endl;
    cout << "Please type 'yes' or 'no'." << endl;
    cin >> userInput;

    bool userLoop = true;

    while(userLoop)
    {
        if (userInput == "yes" || userInput == "Yes" || userInput == "y" || userInput == "Y")
        {
            inventory[3] = "wizard staff";
            cout << "You have discarded your dagger and picked up the staff." << endl;
            cout << "Your current inventory contains: " << endl;

            userLoop = false;
        }

        else if (userInput == "no" || userInput == "No" || userInput == "n" || userInput == "No")
        {
            cout << "You have left the staff behind." << endl;
            cout << "Your current inventory contains: " << endl;

            userLoop = false;
        }

        else
        {
            cout << "Please type 'yes' or 'no'." << endl;
            cin >> userInput;
        }
    }


}