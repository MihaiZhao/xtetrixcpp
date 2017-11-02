#pragma once
#ifndef _BOARD_


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
	inline int getBoardLimitRight() const	{ return this->mBoardLimitRight; }
	inline int getBoardLimitLeft() const	{ return *pmBoardLimitLeft; }
	inline int getBoardLimiBottom() const	{ return *pmBoardLimitBottom; }


};

#endif // _BOARD_
