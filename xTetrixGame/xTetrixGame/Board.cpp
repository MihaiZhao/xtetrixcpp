// ======= Includes =======

#include "Board.h"
#include <iostream>


// ======= Board =======
Board::Board()
{
	// Board Settings

	this->mMinRows = 10;
	this->mMinColumns = 10;
	this->input_mColumnsFromUser;
	this->input_mRowsFromUser;

	this->mBoardLimitRight = 1;
	this->pmBoardLimitLeft = &input_mColumnsFromUser;
	this->pmBoardLimitBottom = &input_mRowsFromUser;

}

Board::~Board()
{
}

void Board::initBoard()
{
	system("cls");

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
			system("cls");
		}
		else passedNumbers = true;
	}

}

void Board::setTheBoardLimits()
{
	

	// ==== Delete User Board Customization ====

	system("cls");


	// ===== Set the Board Limits ========
	for (int row = 1; row <= input_mRowsFromUser; row++)
	{
		for (int column = 1; column <= input_mColumnsFromUser; column++)
		{
			if (column == mBoardLimitRight) { mBoard[row][column] = '#'; } // Set the right border

			if (column == *pmBoardLimitLeft) { mBoard[row][column] = '#'; } // Set the left border

			if (column != mBoardLimitRight && column != *pmBoardLimitLeft) { mBoard[row][column] = ' '; } // Set the blank spaces

			if (row == *pmBoardLimitBottom) { mBoard[row][column] = '#'; } // Set the bottom border
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
	system("cls");


}