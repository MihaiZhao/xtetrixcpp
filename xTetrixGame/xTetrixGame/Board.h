#pragma once
#ifndef _BOARD_
#define _BOARD_

// ======= Defines =======

const int k_BoardLineWidth = 6;
#define BOARD_LINE_WIDTH 6			// Width of each of the two lines that delimit the board
#define BLOCK_SIZE 16				// Width and Height of each block of a piece
#define BOARD_POSITION 320			// Center position of the board from the left of the screen
#define BOARD_WIDTH 10				// Board width in blocks 
#define BOARD_HEIGHT 20				// Board height in blocks
#define MIN_VERTICAL_MARGIN 20		// Minimum vertical margin for the board limit 		
#define MIN_HORIZONTAL_MARGIN 20	// Minimum horizontal margin for the board limit
#define PIECE_BLOCKS 5				// Number of horizontal and vertical blocks of a matrix piece

#include<iostream>


class Board
{
private:
	static int const msMaxRows = 100;		// Static INT - Max numbers of rows
	static int const msMaxColumns = 100;	// Static INT - Max numbers of columns

	int mMinRows;							// INT - Min numbers of rows
	int mMinColumns;						// INT - Min numbers of columns

	int input_mRowsFromUser;				// INT - Input from user for rows
	int input_mColumnsFromUser;				// INT - Input from user for columns

	int mBoardLimitRight;					// INT - Right Board
	int *pmBoardLimitLeft;					// INT Pointer * - Left Board
	int *pmBoardLimitBottom;				// INT pointer * - Bottom Board


	char mBoard[msMaxRows][msMaxColumns];	// CHAR - Creates the board


public:
	Board();									// Constructor
	~Board();									// Destructor

	// Functions
	void initBoard();							// Initialize the board
	void getRowsAndColumnsFromUser();			// Gets the rows and columns from the user input
	void setTheBoardLimits();					// Sets the board borders

	// Accessors
	inline int getBoardLimitRight() const { return this->mBoardLimitRight; }
	inline int getBoardLimitLeft() const { return *pmBoardLimitLeft; }
	inline int getBoardLimiBottom() const { return *pmBoardLimitBottom; }


};

#endif // _BOARD_
