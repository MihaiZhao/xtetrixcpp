#include "inGame.h"
#include "Tetriminos.h"
#include "Board.h"



inGame::inGame()
{

}


inGame::~inGame()
{
}

void inGame::StartGame()
{
	// ====== Create a New Board =======


	board.initBoard();				// init the Board

	tetriminos.initTetriminos();	// init the Tetriminos
	
	system("cls");
}

	// ====== Create a New Tetrimino =======

	// Create a Random Tetrimino



	// Initializes the position

	// ====== Game functions =======

	// Ticker

	
	// Check collision


	// Fall


	// Erase row
