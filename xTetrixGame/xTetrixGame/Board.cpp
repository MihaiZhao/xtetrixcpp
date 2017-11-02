// ======= Includes =======

#include "Board.h"
#include <iostream>


// ======= Board =======
Board::Board()
{
	// Board Settings

	this->mMinRows = 10;				// INT - Set minimum numbers of rows
	this->mMinColumns = 10;				// INT - Set minimum numbers of rows

	this->input_mColumnsFromUser;		// INT - Get numbers of columns from user
	this->input_mRowsFromUser;			// INT - Get numbers of rows from user

	this->mBoardLimitRight = 1;								// INT - Set right border
	this->pmBoardLimitLeft = &input_mColumnsFromUser;		// INT Pointer - Set left border 
	this->pmBoardLimitBottom = &input_mRowsFromUser;		// INT Pointer - Set bottom border

}

Board::~Board()
{
}

void Board::initBoard()
{
	CLEARSCREEN;

	getRowsAndColumnsFromUser();

	setTheBoardLimits();


}

void Board::getRowsAndColumnsFromUser()
{
	bool passedNumbers = false;		// Variable that checks

									// Check if numbers are valid
	while (!passedNumbers)
	{

		std::cout << "Please insert board height: "; std::cin >> this->input_mRowsFromUser;
		std::cout << "Please insert board length: "; std::cin >> this->input_mColumnsFromUser;

		if (input_mRowsFromUser >= msMaxRows + 1 || input_mColumnsFromUser >= msMaxColumns + 1 || input_mRowsFromUser < mMinRows - 1 || input_mColumnsFromUser <= mMinColumns - 1)
		{
			std::cout << "\nSorry, but your numbers are not valid ( minim : " << mMinRows << " and max : " << msMaxRows << "). Please insert again.\n\n";
			system("pause");
			CLEARSCREEN;
		}
		else passedNumbers = true;
	}

}

void Board::setTheBoardLimits()
{
	

	// ==== Delete User Board Customization ====

	CLEARSCREEN;


	// ===== Set the Board Limits ========
	for (int row = 1; row <= input_mRowsFromUser; row++)
	{
		for (int column = 1; column <= input_mColumnsFromUser; column++)
		{
			if ( column == getBoardLimitRight() ) { mBoard[row][column] = '#'; } // Set the right border

			if ( column == getBoardLimitLeft() ) { mBoard[row][column] = '#'; } // Set the left border

			if ( column != getBoardLimitRight() && column != getBoardLimitLeft() ) { mBoard[row][column] = ' '; } // Set the blank spaces

			if ( row == getBoardLimiBottom() ) { mBoard[row][column] = '#'; } // Set the bottom border
		}
	}



	// ===== Print the Board Limits ========
	for (int row = 1; row <= input_mRowsFromUser; row++)
	{
		for (int column = 1; column <= input_mColumnsFromUser; column++)
		{
			std::cout << mBoard[row][column];

		}
		std::cout << "\n";
	}

	// ===== Show current Board Settings =====
	std::cout << "\n\nHeight: " << input_mRowsFromUser << " ; " << "Length: " << input_mColumnsFromUser << "" << "\n";
	std::cout << "\n\nBoard Limit Right: " << mBoardLimitRight << " ; " << "Board Limit Left: " 
		<< *pmBoardLimitLeft << " ; "<< "Board Limit Bottom: " << *pmBoardLimitBottom <<  "\n\n";

	// ====== Debugging ========
	system("pause");
	CLEARSCREEN;


}

