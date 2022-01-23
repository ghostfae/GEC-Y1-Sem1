#include "Cat.h"

Cat::Cat()
{
	cout << "I am a cat." << endl;
}
Cat::~Cat()
{
}
void Cat::Talk()
{
	cout << "I am your cat and I feel ";

	int mood = GetMood();

	if (mood > 14) { cout << "mad."; }
	else if (mood > 9) { cout << "frustrated."; }
	else if (mood > 4) { cout << "okay."; }
	else { cout << "happy!"; }

	PassingTime();
}