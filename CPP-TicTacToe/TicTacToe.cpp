#include "TicTacToe.h"
#include <iostream>

TicTacToe::TicTacToe()

	//char slot1, slot2, slot3, slot4, slot5, slot6, slot7, slot8, slot9;
	: slot1('1'), slot2('2'), slot3('3'), slot4('4'), slot5('5'), slot6('6'), slot7('7'), slot8('8'), slot9('9'), player(1)
	{
	}
	


	void TicTacToe::Display() const
	{
		cout << "Player " << player << ", choose a position 1-9 the board is as follows \n";
			
		cout << slot1 << " " << slot2 << " " << slot3 << "\n"
			<< slot4 << " " << slot5 << " " << slot6 << "\n"
			<< slot7 << " " << slot8 << " " << slot9 << "\n";
		
	}

	bool TicTacToe::IsGameOver() const
	{
		if ((slot1 == slot2 && slot2 == slot3) || //horizontal dubs
			(slot4 == slot5 && slot5 == slot6) ||
			(slot7 == slot8 && slot8 == slot9) ||
			(slot2 == slot5 && slot5 == slot8) || //vert dubs
			(slot1 == slot4 && slot4 == slot7) ||
			(slot3 == slot6 && slot6 == slot9) || //diagonal dubs
			(slot1 == slot5 && slot5 == slot9) ||
			(slot3 == slot5 && slot5 == slot7))
		{
			return true;
		}
		if (slot1 != '1' && slot2 != '2' && slot3 != '3' && slot4 != '4' && slot5 != '5' && slot6 != '6' && slot7 != '7' && slot8 != '8' && slot9 != '9') 
		{
			return true;
		}

		return false;
	}

	void TicTacToe::TakeTurn()
	{
		char token;
		char slot;
		if (player == 1)
		{
			token = 'X';

		}
		else {
			token = 'O';

		}
		
		cin >> slot;
		if (slot == '1'&& slot1 != 'X' && slot1 != 'O')
		{
			slot1 = token;
		}
		else if (slot == '2' && slot2 != 'X' && slot2 != 'O')
		{
			slot2 = token;
		}
		else if (slot == '3' && slot3 != 'X' && slot3 != 'O')
		{
			slot3 = token;
		}
		else if (slot == '4' && slot4 != 'X' && slot4 != 'O')
		{
			slot4 = token;
		}
		else if (slot == '5' && slot5 != 'X' && slot5 != 'O')
		{
			slot5 = token;
		}
		else if (slot == '6' && slot6 != 'X' && slot6 != 'O')
		{
			slot6 = token;
		}
		else if (slot == '7' && slot7 != 'X' && slot7 != 'O')
		{
			slot7 = token;
		}
		else if (slot == '8' && slot8 != 'X' && slot8 != 'O')
		{
			slot8 = token;
		}
		else if (slot == '9' && slot9 != 'X' && slot9 != 'O')
		{
			slot9 = token;
		}
		else
		{
			cout << "Invalid move, try again\n";
		}
		if (player == 1)
		{
			player = 2;
		}
		else
		{
			player = 1;
		}
		system("cls");


	}
