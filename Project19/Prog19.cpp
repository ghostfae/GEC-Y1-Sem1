#include <iostream> 
using namespace std;

bool oddOrEven(int a)
{
	int b = a % 2;
	if (b == 1)
	{
		return false;
	}

	else
	{
		return true;
	}
}



void outputResults(int numOfOdd, int oddTotal, int numOfEven, int evenTotal)
{
	cout << "The total amount of even numbers is " << numOfEven << endl;
	cout << "The sum of your evens is " << evenTotal << endl;
	cout << "The total amount of odd numbers is " << numOfOdd << endl;
	cout << "The sum of your odds is " << oddTotal << endl;
}



int main()
{
	int evenToken = 0;
	int oddToken = 0;
	int inputNumOdd = 0;
	int inputNumEven = 0;
	int numInput;

	for (int n = 0; n < 10; n++)
	{
		cout << "Please enter a number." << endl;
		cin >> numInput;

		if (oddOrEven(numInput))
		{
			cout << "Your number is even." << endl;
			evenToken = evenToken++;
			inputNumEven = inputNumEven + numInput;
		}

		else
		{
			cout << "Your number is odd." << endl;
			oddToken = oddToken++;
			inputNumOdd = inputNumOdd + numInput;
		}

	}

	outputResults(oddToken, inputNumOdd, evenToken, inputNumEven);

}