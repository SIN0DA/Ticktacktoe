#include "stdafx.h" // DO NOT PLACE ANY INCLUDES ABOVE HERE
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

char square[10] = { '0', '1', '2', '3', '4', '5', '6', '7', '8', '9' };
int checkwin();
void Board();


int main()
{
	int player = 1, i, choice;
	char mark;


	do {

		Board();
		player = (player % 2) ? 1 : 2; //Switching player
		
		cout << "Player " << player << ", Enter a Number: ";
		cin >> choice;
		
		mark = (player == 1) ? 'X' : 'O';
	

		if (choice == 1 && square[1] == '1') {
			square[1] = mark;
		}
		else if (choice == 2 && square[2] == '2') {
			square[2] = mark;
		}

		else if (choice == 3 && square[3] == '3') {
			square[3] = mark;
		}

		else if (choice == 4 && square[4] == '4') {
			square[4] = mark;
		}

		else if (choice == 5 && square[5] == '5') {
			square[5] = mark;
		}

		else if (choice == 6 && square[6] == '6') {
			square[6] = mark;
		}

		else if (choice == 7 && square[7] == '7') {
			square[7] = mark;
		}

		else if (choice == 8 && square[8] == '8') {
			square[8] = mark;
		}

		else if (choice == 9 && square[9] == '9') {
			square[9] = mark;

		}

		else {
			cout << "This move is invalid" << endl;
			player--;
			cin.ignore();
			cin.get();
		}

		i = checkwin();
		player++;

	} while (i == -1);

	Board();

	if (i == 1) {
		cout << "==>\aPlayer " << --player << " win ";
	}


	else {
		cout << "==>\aGame draw";
	}

	cin.ignore();
	cin.get();
	return 0;
}


//Creates the board
void Board() {
	system("cls");//updates board
	cout << "  TicTacToe" << endl;
	cout << "Player 1 (X)  -  Player 2 (O)" << endl << endl;
	cout << endl;
	
	cout << "  |   |" << endl;
	cout << square[1] << " | " << square[2] << " | " << square[3] << endl;
	cout << "__|___|___" << endl;
	cout << square[4] << " | " << square[5] << " | " << square[6] <<endl;
	cout << "__|___|___" << endl;
	cout << square[7] << " | " << square[8] << " | " << square[9] << endl;
	cout << "  |   |" << endl;

}

//How it check a player wins
int checkwin() {

	if (square[1] == square[2] && square[2] == square[3]) {
		return 1;
	}

	else if (square[4] == square[5] && square[5] == square[6]) {
		return 1;
	}

	else if (square[7] == square[8] && square[8] == square[9]) {
		return 1;
	}

	else if (square[1] == square[5] && square[5] == square[9]) {
		return 1;
	}

	else if (square[4] == square[5] && square[5] == square[5]) {
		return 1;
	}

	else if (square[3] == square[5] && square[5] == square[7]) {
		return 1;
	}

	else if (square[1] != '1' && square[2] != '2' && square[3] != '3' && square[4] != '4' && square[5] != '5' && square[6] != '6' && square[7] != '7' && square[8] != '8' && square[9] != '9') {
		return 0;
	}

	else {
			return -1;
	}

}
