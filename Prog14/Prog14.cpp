#include <iostream> 
using namespace std;

int main()
{
    int numberA;
    int numberB;
    int nextNum = 1;

    cout << "Please enter a number." << endl;
    cin >> numberA;
    cout << "Now enter another number." << endl;
    cin >> numberB;

    int meanNum = 2;
    float sumC = (numberA + numberB) / meanNum;

    while (nextNum != 0)
    {
        meanNum = meanNum++;
        cout << "Please enter another number." << endl;
        cin >> nextNum;
        sumC = (sumC + nextNum) / meanNum;
        cout << "The current average is " << sumC << endl;
    }

    if (nextNum == 0)
    {
        cout << "You have entered zero. Goodbye." << endl;
    }

}