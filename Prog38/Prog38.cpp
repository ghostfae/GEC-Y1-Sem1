#include <iostream> 
using namespace std;

void plus25(int&);

void minus25(int&);

int main()
{
	int num;
	//int& rNum = num;

	cout << "Please input a number." << endl;
	cin >> num;
	cout << "Your number is: " << num << endl;

	plus25(num);

	cout << "Please input another number." << endl;
	cin >> num;
	cout << "Your number is: " << num << endl;

	minus25(num);
}

void plus25(int& rNum)
{
	rNum = rNum + 25;
	cout << "Adding 25..." << endl;
	cout << "Your new number is: " << rNum << endl;
}

void minus25(int& rNum)
{
	rNum = rNum - 25;
	cout << "Subtracting 25..." << endl;
	cout << "Your new number is: " << rNum << endl;
}