#pragma once
#include "Game.h"
#include <iostream>
using namespace std;

class TicTacToe : public Game
{
public:

	//char slot1, slot2, slot3, slot4, slot5, slot6, slot7, slot8, slot9;
	char slot1 = 1, slot2 = 2, slot3 = 3, slot4 = 4, slot5 = 5, slot6 = 6, slot7 = 7, slot8 = 8, slot9 = 9;
	int player = 1;


	void Display() const
	{


		cout << "" << slot1 << "" << slot2 << "" << slot3
			<< "" << slot4 << "" << slot5 << "" << slot6 << ""
			<< slot7 << "" << slot8 << "" << slot9;
		return;
	}

	bool IsGameOver() const
	{
		if ((slot1 == slot2 && slot2 == slot3) || //horizontal dubs
			(slot4 == slot5 && slot5 == slot6) ||
			(slot7 == slot8 && slot8 == slot9) ||
			(slot2 == slot5 && slot5 == slot8) || //vert dubs
			(slot1 == slot4 && slot4 == slot7) ||
			(slot3 == slot6 && slot6 == slot9) || //diagonal dubs
			(slot1 == slot5 && slot5 == slot9) ||
			(slot3 == slot5 && slot5 == slot7)) {
			return true;
		}
		if (slot1 != '1' && slot2 != '2' && slot3 != '3' && slot4 != '4' && slot5 != '5' && slot6 != '6' && slot7 != '7' && slot8 != '8' && slot9 != '9') {
			return true;
		}

		return false;
	}

	void TakeTurn()
	{
		char playerMarker;
		char slot;
		if (player = 1)
		{
			playerMarker = 'X';

		}
		else {
			playerMarker = 'O';


			cout << "Player" << player << ", choose a position 1-9 the board is as follows \n" << "| 1 | 2 | 3 |\n| 4 | 5 | 6 |\n| 7 | 8 | 9 |\n";
			cin >> slot;
			if ((slot == 1) && slot1 == 'X' && slot1 == 'O') { slot1 = playerMarker; }



		}
	}
};