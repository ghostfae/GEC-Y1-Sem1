#include <iostream> 
using namespace std;

int main()
{
    int difficulty;
    cout << "Please choose a difficulty by typing the corresponding number:" << endl;
    cout << "1. I'm too young to die! \n" << "2. Hey, not too rough! \n" << "3. Hurt me plenty. \n" << "4. Ultra-Violence. \n" << "5. Nightmare... \n" << endl;
    cin >> difficulty;

    switch (difficulty)
    {
    case 1:
        cout << "Okay weakling, don't stub your toe too hard." << endl;
        break;

    case 2:
        cout << "Sure, whatever." << endl;
        break;

    case 3:
        cout << "The intended mode, I like you." << endl;
        break;

    case 4:
        cout << "Okay edgelord, let's go." << endl;
        break;

    case 5:
        cout << "May only God rest your soul." << endl;
        break;

    default:
        cout << "Please type a number 1-5." << endl;
    }

}