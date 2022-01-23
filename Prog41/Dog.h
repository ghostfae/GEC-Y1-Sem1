#pragma once
#ifndef DOG_H
#define DOG_H
#include "Pet.h"

class Dog :
    public Pet
{
public:
	Dog();
	~Dog();

	virtual void Talk();
};

#endif