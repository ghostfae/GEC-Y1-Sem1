#include <iostream> 
#include<windows.h> 
using namespace std;

int main()
{
    bool playing = true;

    while (playing)
    {
        int n;
        cout << "Enter a number between 1-10." << endl;
        cin >> n;

        for (int a = 1; a <= n; a++)
        {
            for (int b = 1; b <= a; b++)
            {
                cout << "* ";
            }
            cout << "\n";
        }

        cout << "Would you like to continue? Please type 'y' or 'n'." << endl;
        char answer;
        cin >> answer;

        if (answer == 'y' || answer == 'Y')
        {
            cout << "Now continuing..." << endl;
            Sleep(3);
            continue;
        }

        else if (answer == 'n' || answer == 'N')
        {
            cout << "Goodbye." << endl;
            Sleep(3);
            playing = false;
        }

        else
        {
            continue;
        }

    }

}