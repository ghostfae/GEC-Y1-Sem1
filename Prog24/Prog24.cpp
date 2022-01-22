#include <iostream> 
#include <string>
using namespace std;

int main()
{
	char userName[50] = "a" "b" "c";

	cout << "Please enter your first initials and surname in the following format:" << endl;
	cout << "A B Surname" << endl;
	cout << "\n";
	cin.getline(userName, 50);

	char initials[2];
	char surname[50];

	int initial_pos = 0;
	int surname_pos = 0;

	for(int pos = 0; userName[pos] != 0; pos++)
	{
		char c = userName[pos];

		if (c == ' ')
			initial_pos++;
		else
		if (initial_pos < 2)
			initials[initial_pos] = c;
		else
			surname[surname_pos++] = c;
	}
	surname[surname_pos] = 0;

	for (int i = 0; i < 2; i++)
		cout << initials[i] << endl;
	cout << surname << endl;

}