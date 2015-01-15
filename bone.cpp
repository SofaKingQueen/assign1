#Assignment 1 - Chickenfoot
#
#include "bone.h"
#
Bone::Bone()
{
	return;
}

Bone::~Bone()
{
	return;
}

Bone::Bone(int first, int second)
{
	valueOne (first);
	valueTwo (second);
	isEmpty  (true);
}

void Bone::setValue(int first, int second)
{
	valueOne = first;
	valueTwo = second;
	isEmpty	 = false;

	return;
}

int Bone::returnTTLPoint()
{
	return valueOne + valueTwo;

}

Bone& Bone::operator=const Bone& b)
{
	this->valueOne = b.valueOne;
	this->valueTwo = b.valueTwo;
	
	return;
}
