#pragma once
#include "Game.h"
#include <iostream>
using namespace std;

class TicTacToe : public Game
{
public:
	void Display() const
	{
		cout << "Choose a position 1-9 the board is as follows \n" << "| 1 | 2 | 3 |\n| 4 | 5 | 6 |\n| 7 | 8 | 9 |\n";
	}

	bool isGameOver() const
	{
		int score = 0;
		if (!(score == 3))
		{
			void Display();
		}
		return true;
	}

	void TakeTurn()
	{
		cout << "farted again";
	}
};

