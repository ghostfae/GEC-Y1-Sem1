#include <iostream> 
#include <string>
using namespace std;

int main()
{

	string testString = "Do you know who loves C++? XX does!";
	string inputA;
	string inputB;
	cout << "Please enter your name below:" << endl;
	getline(cin, inputA);

	testString.insert(28, inputA);
	cout << testString << endl;
	testString.erase(remove(testString.begin(), testString.end(), 'X'), testString.end());
	cout << testString << endl;

	bool looping = true;
	while (looping)
	{
		cout << "Please enter a longer name." << endl;
		getline(cin, inputB);

		int LenA = inputA.length();
		int LenB = inputB.length();

		if (LenA < LenB)
		{
			testString.replace(27, LenA, inputB);
			cout << testString << endl;
			looping = false;
		}
		else
		{
			cout << "This name is shorter than before. Try again." << endl;
		}
	}

}