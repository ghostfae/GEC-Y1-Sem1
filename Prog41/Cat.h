#pragma once
#ifndef CAT_H
#define CAT_H
#include "Pet.h"

class Cat :
    public Pet
{
public:
	Cat();
	~Cat();

	virtual void Talk();
};

#endif
