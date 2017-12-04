#pragma once
#include "stdafx.h"
#include "game.h"

class Game;

class Player
{
public:
	virtual int getNextTurn(Game &game) = 0;
};

class HumanPlayer : public Player
{
public:
	int getNextTurn(Game &game);
};

class AiPlayer : public Player
{
public:
	int getNextTurn(Game &game);
};
