//Assignment 1 -chickenfoot
//ChickenYard.h
#ifndef YARD_H
#define YARD_H

#include "bone.h"
#include <iostream>
#include <vector>

using namespace std;

class ChickenYard
{
public;
	ChickenYard();
	~ChickenYard() {}	
	void shuffleBone();
	bool dealBone(bone*& aBone);
	bool creatBone(bone*& aBone);
	bool isEmpty() const;
	void print() const;

private:
	vector<bone*> bone;





};
#endif
