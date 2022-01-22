#include <iostream>
using namespace std;

int main()
{
    int count = 3;
    for (int i = 0; i < count; i++)
    {
        int current = i + 1;
        cout << current;
        if (current == 2)
            cout << " is an even number" << endl;
        else
            cout << " is an odd number" << endl;
    }

    // Pause the output
    cin.get();

    return 0;
}
