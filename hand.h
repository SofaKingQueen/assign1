//Assignment 1 - chickenfoot
//hand.h
#ifndef HAND_H
#define HAND_H

#include "bone.h"
#include <vector>
#include <iostream>

using namespace std;

class Hand
{
public:
	Hand();
	~Hand() {}
	void addBone(bone* aBone);
	bool removeBone(int position, bone*& aBone);
	int getCount() const; //or currCount() const;
	void compareBone() const;
	bool getBone(int valueOne, int valueTwo, bone*& aBone);
	void print() const;
	 





private:
	vector<bone*> bone;




};
#endif
