#include <iostream> 
#include <fstream>
#include <string>
using namespace std;

void menu();
void enter();
void display();
int getLowestScoreIndex();
bool readScores();
void writeScores();
bool updateScores(string name, int score);
bool parseNameAndScore(string line, string &name, int &score);

const int N = 10;
const string filename = "scores.txt";

int length = 0;
int scores[N];
string names[N];



int main()
{
	readScores();
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

	if (updateScores(name, score))
	{
		writeScores();
	}

	cout << "\nThank you for your input. Returning to main menu..." << endl;
	cout << "\n";
}

bool updateScores(string name, int score)
{
	if (length < N)
	{
		scores[length] = score;
		names[length] = name;
		length++;
		return true;
	}
	else
	{
		int index = getLowestScoreIndex();
		if (scores[index] <= score)
		{
			scores[index] = score;
			names[index] = name;
			return true;
		}
		
	}
	return false;
}

void display()
{
	cout << "Displaying previous scores..." << endl;
	for (int i = 0; i < length; i++)
	{
		cout << names[i] << " " << scores[i] << endl;
	}
	cout << "\nReturning to main menu..." << endl;
	cout << "\n";
}

int getLowestScoreIndex()
{
	int min = 0;
	for(int i = 0; i < length; i++)
	{
		if (scores[i] < scores[min])
		{
			min = i;
		}
	}
	return min;
}

// returns false if error encountered while reading the file or parsing the line
bool readScores()
{
	string line;
	ifstream file;

	length = 0; // reset length so that existing scores are wiped

	file.open(filename, ios::in);

	while (getline(file, line))
	{
		int score;
		string name;
		if (parseNameAndScore(line, name, score))
		{
			updateScores(name, score);
		}
		else
		{
			file.close();
			return false;
		}
	}

	file.close();
	return true;
}

void writeScores()
{
	ofstream file;
	file.open(filename, ios::out);

	for (int i = 0; i < length; i++)
	{
		file << names[i] << " " << scores[i] << endl;
	}

	file.close();
}

bool parseNameAndScore(string line, string& name, int& score)
{
	int spacePos = line.find(' ');
	if (spacePos == string::npos /* no space found */
		|| spacePos == 0        /* name length is 0*/)
	{
		cout << "Error parsing name." << endl;
		return false;
	}
	name = line.substr(0, spacePos);

	int scoreStart = spacePos + 1;
	string scoreStr = line.substr(scoreStart);
	try
	{
		score = stoi(scoreStr);
	}
	catch (const invalid_argument) 
	{
		cout << "Error parsing score." << endl;
		return false;
	}

	return true;
}