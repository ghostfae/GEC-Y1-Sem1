#include "Pet.h"
#include "Hamster.h"
#include "Cat.h"
#include "Dog.h"
#include <iostream> 
using namespace std;

Pet* petPtr;

void menu();

int main()
{
	int choice;
	cout << "Welcome to ePet Care. Please select one of these options to choose a pet." << endl;
	cout << "1. Cat \n2. Dog \n3. Hamster" << endl;
	cin >> choice;

	switch(choice)
	{
	case 1:
		petPtr = new Cat();
		break;
	case 2:
		petPtr = new Dog();
		break;
	case 3:
		petPtr = new Hamster();
		break;
	default:
		cout << "Please type 1-3." << endl;
	}
	menu();
}

void menu()
{
	while (true)
	{
		int choice;
		cout << "\nPlease select one of the following options." << endl;
		cout << "0. Quit \n1. Listen to your pet \n2. Feed your pet \n3. Play with your pet" << endl;

		cin >> choice;
		switch (choice)
		{
		case 0:
			return;
		case 1:
			petPtr->Talk();
			break;
		case 2:
			petPtr->Feed();
			break;
		case 3:
			petPtr->Play();
			break;
		default:
			cout << "Please type 0-3." << endl;
		}
	}
}