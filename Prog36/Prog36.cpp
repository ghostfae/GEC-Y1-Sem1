#include <iostream> 
using namespace std;

void inputDetails(int* n1, int* n2);


void outputDetails(int& integer1, int& integer2, int* pointer);

int main()
{
	int num1;
	int num2;

	int* pNum = &num1;

	inputDetails(&num1, &num2);
	outputDetails(num1, num2, pNum);

	pNum = NULL;
}

void inputDetails(int* n1, int* n2)
{
	int input1;
	int input2;

	cout << "Please input two numbers." << endl;
	cin >> input1;
	cin >> input2;

	*n1 = input1;
	*n2 = input2;

	cout << "Your numbers are: " << *n1 << " and " << *n2 << endl;

}
void outputDetails(int& integer1, int& integer2, int* pointer)
{
	cout << "The value of your first number is: " << integer1 << endl;
	cout << "The address of your first number is: " << pointer << endl;

	pointer = &integer2;
	cout << "The value of your second number is: " << integer2 << endl;
	cout << "The address of your second number is: " << pointer << endl;

	cout << "The value of your pointer is: " << pointer << endl;
	cout << "The dereferenced value of your pointer is: " << *pointer << endl;
	cout << "The address of your pointer is: " << &pointer << endl;
}

