//Assignment 1 - Chickenfoot
//game.h
#ifndef GAME_H
#define GAME_H

#include "bone.h"
#include <iostream>

using namespace std;

class Game
{
public:
	Game();
	~Game() {}
	bool startGame();
	void get_name();
	bool getPlayer(Chickenyard*& chickenYard)	
	void playerTakeTurn() const;
	void getWinner() const;
	bool gameOver();
	void print() const;

private:
	Yard* yard;
	Player* player[];
	


};
#endif
