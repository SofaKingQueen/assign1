//Assignment 1 - Chickenfoot
// bone.h
#ifndef BONE_H
#define BONE_H
class Bone
{
public:
	Bone();
	~Bone() {}
	Bone			(int firstNum, int secondNum);
	void setValue		(int firstNum, int secondNum);  // bone values set
	int  returnFirstNum()	{return valueOne;}	  // bone value returned
	int  returnSecondNum()	{return valueTwo;}	  // bone value returned
	bool returnEmpty()	{return isEmpty; }
	int  returnTTLPoint();				  // total your points
	void print() const;
private:
	int valueOne() const;
	int valueTwo() const;
	bool isEmpty() const;
	bool isDouble() const;

};	
#endif
