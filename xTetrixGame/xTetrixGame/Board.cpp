// ======= Includes =======

#include "Board.h"
#include <iostream>
#include <map>


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

	// ===== Board Initilization Settigs ======
	int const maxRows = 100;
	int const maxColumns = 100;
	int const minRows = 10;
	int const minColumns = 10;

	char mBoard[maxRows][maxColumns];

	// ===== User Board Customization ======
	int  m_row;
	int  m_column;

	bool passedNumbers = false;

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
	int const m_boardLimitRight = 0;
	int const m_boardLimitLeft = m_column - 1;
	int const m_boardLimitBottom = m_row - 1;

	// ===== Set the Board Limits ========
	for (int row = 0; row < m_row; row++)
	{
		for (int column = 0; column < m_column; column++)
		{
			if (column == m_boardLimitRight)									mBoard[row][column] = '#';	// Set the right boarder
			
			if (column == m_boardLimitLeft)										mBoard[row][column] = '#';	// Set the left boarder

			if (row == m_boardLimitBottom)										mBoard[row][column] = '#';	// Set the bottom border

			if (column != m_boardLimitRight && column != m_boardLimitLeft)		mBoard[row][column] = ' ';	// Set the blank spaces
			
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

