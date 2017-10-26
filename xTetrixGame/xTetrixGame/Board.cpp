// ======= Includes =======

#include "Board.h"
#include <iostream>


// ======= Board =======

Board::Board()
{
}


Board::~Board()
{
}

void Board::initBoard()
{
	// ===== Delete Previous Screen ======
	system("cls");

	// ===== Board Initialization Settings ======
	int const maxRows = 100;		// Maximum numbers of rows
	int const maxColumns = 100;		// Maximum numbers of columns
	int const minRows = 10;			// Minimum numbers of rows
	int const minColumns = 10;		// Minimum numbers of columns

	char mBoard[maxRows][maxColumns];

	// ===== User Board Customization ======
	int  m_row;						// User input for rows
	int  m_column;					// User input for columns

	bool passedNumbers = false;		// Variable that checks

	// Check if numbers are valid
	while (!passedNumbers)
	{

		std::cout << "Please insert board height: "; std::cin >> m_row;
		std::cout << "Please insert board length: "; std::cin >> m_column;

		if (m_row >= maxRows+1 || m_column >= maxColumns+1 || m_row < minRows-1 || m_column <= minColumns-1)
		{
			std::cout << "\nSorry, but your numbers are not valid ( minim : "<< minRows << " and max : " << maxRows << "). Please insert again.\n\n";
			system("pause");
			system("cls");
		}
		else passedNumbers = true;
	}

	// ==== Delete User Board Customization ====
	system("cls");

	// ===== Create the Board Limits ========
	int m_boardLimitRight = 0;
	int m_boardLimitLeft = m_column - 1;
	int m_boardLimitBottom = m_row - 1;


	// ===== Set the Board Limits ========
	for (int row = 0; row < m_row; row++)
	{
		for (int column = 0; column < m_column; column++)
		{
			if (column == m_boardLimitRight)									{ mBoard[row][column] = '#'; } // Set the right border

			if (column == m_boardLimitLeft)										{ mBoard[row][column] = '#'; } // Set the left border

			if (column != m_boardLimitRight && column != m_boardLimitLeft)		{ mBoard[row][column] = ' '; } // Set the blank spaces

			if (row == m_boardLimitBottom)										{ mBoard[row][column] = '#'; } // Set the bottom border
		}
	}

	// ===== Print the Board Limits ========
	for (int row = 0; row < m_row; row++)
	{
		for (int column = 0; column < m_column; column++)
		{
			std::cout << mBoard[row][column];

		}
		std::cout << "\n";
	}

	// ===== Show current Board Settings =====
	std::cout << "\n\nHeight: "<< m_row << " ; " << "Length: " << m_column << "" << "\n\n";

	// ====== Debugging ========
	system("pause");
	system("cls");
	

}

