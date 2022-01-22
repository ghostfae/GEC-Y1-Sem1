#include <iostream> 
#include <fstream>
using namespace std;

void menu();
void enter();
void display();
int getLowestScoreIndex();

const int N = 3;

int length = 0;
int scores[N];
string names[N];

int main()
{
	//ofstream outfile("scores.txt");


	menu();
}

void menu()
{
	char input;

	while (true)
	{
		cout << "Please choose one of the following options by typing the correlating number." << endl;
		cout << "1. Enter a score" << endl;
		cout << "2. Display scores" << endl;
		cout << "3. Exit." << endl;

		cin >> input;

		if (input == '1')
		{
			enter();
		}
		else if (input == '2')
		{
			display();
		}
		else if (input == '3')
		{
			cout << "Thank you for using this program. Goodbye." << endl;
			return;
		}
		else
		{
			cout << "Invalid option. Please type '1', '2', or '3'." << endl;
		}
	}
}

void enter()
{
	string name;
	int score;
	cout << "Please enter your name." << endl;
	cin >> name;
	cout << "Please enter your score." << endl;
	cin >> score;

	// if number of elements less than N, just add it
	// otherwise, find the lowest score and replace it

	if (length < N)
	{
		scores[length] = score;
		names[length] = name;
		length++;
	}
	else
	{
		int index = getLowestScoreIndex();
		if(scores[index] <= score)
		{
			scores[index] = score;
			names[index] = name;
		}
	}
	cout << "\nThank you for your input. Now returning to main menu..." << endl;
	menu();
}

void display()
{
	cout << "Now displaying previous scores..." << endl;
	for (int i = 0; i < length; i++)
	{
		cout << names[i] << " " << scores[i] << endl;
	}
	char dummy;
	cin >> dummy;
}

int getLowestScoreIndex()
{
	int mini = 0;
	for(int i = 0; i < length; i++)
	{
		if (scores[i] < scores[mini])
		{
			mini = i;
		}
	}
	return mini;
}