#include "Hamster.h"

Hamster::Hamster()
{
	cout << "I am a hamster." << endl;
}
Hamster::~Hamster()
{
}
void Hamster::Talk()
{
	cout << "I am your hamster and I feel ";

	int mood = GetMood();

	if (mood > 15) { cout << "mad."; }
	else if (mood > 10) { cout << "frustrated."; }
	else if (mood > 5) { cout << "okay."; }
	else { cout << "happy!"; }

	PassingTime();
}