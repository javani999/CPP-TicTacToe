#pragma once
#include "Game.h"
#include <iostream>
using namespace std;

class TicTacToe : public Game
{
private:
	char slot1, slot2, slot3, slot4, slot5, slot6, slot7, slot8, slot9;
	int player = 1;

public:

	TicTacToe();

	int main()
	{
		TicTacToe game;
		game.Display();
		while (!game.IsGameOver())
		{
			game.TakeTurn();
			game.Display();
		}
		game.Display();
		cout << "Player" << player << " wins!\n";
	}
	void Display() const ;
	void TakeTurn();
	bool IsGameOver() const;
};