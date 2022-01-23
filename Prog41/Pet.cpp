#include "Pet.h"


Pet:: Pet(int hunger, int boredom)
{
	cout << "A new pet has arrived!" << endl;
	m_hunger = hunger;
	m_bored = boredom;
}

Pet::~Pet()
{
}

void Pet::Talk()
{
	cout << "I am your pet and I feel ";

	int mood = GetMood();

	if (mood > 15) { cout << "mad." << endl; }
	else if (mood > 10) { cout << "frustrated." << endl; }
	else if (mood > 5) { cout << "okay." << endl; }
	else { cout << "happy!" << endl; }

	PassingTime();
}

void Pet::Feed(int food)
{
	cout << "Tasty!" << endl;
	m_hunger -= food;
	if (m_hunger < 0)
	{
		m_hunger = 0;
	}
	PassingTime();
}

void Pet::Play(int fun)
{
	cout << "Wee!" << endl;
	m_bored -= fun;
	if (m_bored < 0)
	{
		m_bored = 0;
	}
	PassingTime();
}

void Pet::PassingTime(int time)
{
	m_hunger += time;
	m_bored += time;
}