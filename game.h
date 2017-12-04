#pragma once
#include "stdafx.h"
#include "players.h"

class Player;

enum GameState {TurnP1, TurnP2, Draw, P1Won, P2Won};
enum BoardField {Empty, Player1, Player2};

class Game
{
public:

	const int BoardWidth = 7;
	const int BoardHeight = 6;

	Game(Player &p1, Player &p2);

	GameState getState();

	bool isRunning();

	BoardField operator() (int x, int y) const;

	void nextTurn();

private:
	GameState currentState;
	BoardField** board;
	Player* player1;
	Player* player2;
};
