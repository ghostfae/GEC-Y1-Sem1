#include "Dog.h"

Dog::Dog()
{
	cout << "I am a dog." << endl;
}
Dog::~Dog()
{
}
void Dog::Talk()
{
	cout << "I am your dog and I feel ";

	int mood = GetMood();

	if (mood > 16) { cout << "mad."; }
	else if (mood > 11) { cout << "frustrated."; }
	else if (mood > 6) { cout << "okay."; }
	else { cout << "happy!"; }

	PassingTime();
}