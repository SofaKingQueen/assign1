//Assignment 1
//player.h
#ifndef PLAYER_H
#define PLAYER_H

#include "bone.h"
#include "yard.h"
#include "hand.h"
#include <string>
#include <iostream>

using namespace std;

class Player
{
public:
	Player();
	~Player() {}
        int _playID();
	int _playerCount;        
	bool drawBone(ChickenYard*& chickenYard);
	bool playBone(Bone*& aBone);
	void getScore() const;
	void print() const;


private:
	Hand hand();
	int winningHand();
	string _name[20];



};
#endif
