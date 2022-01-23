#pragma once
#ifndef HAMSTER_H
#define HAMSTER_H
#include "Pet.h"

class Hamster : public Pet
{
public:
	Hamster();
	~Hamster();

	void Talk();

};

#endif