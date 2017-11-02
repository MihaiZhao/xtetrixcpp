// ========= Includes =========

#include "Tetriminos.h"

// ========= Tetriminos =========

Tetriminos::Tetriminos()
{}

Tetriminos::~Tetriminos()
{}

void Tetriminos::initTetriminos()
{
	getShape1(); std::cout << std::endl;	// Load Shape 1
	getShape2(); std::cout << std::endl;	// Load Shape 2
	getShape3(); std::cout << std::endl;	// Load Shape 3
	getShape4(); std::cout << std::endl;	// Load Shape 4
	getShape5(); std::cout << std::endl;	// Load Shape 5
	getShape6(); std::cout << std::endl;	// Load Shape 6
	getShape7(); std::cout << std::endl;	// Load Shape 7
	CLEARSCREEN;
}	

void Tetriminos::getShape1()
{
	std::ifstream mShape1;

	mShape1.open("Shapes/Shape1.txt", std::fstream::in);

	if (!mShape1.is_open()) {
		std::cerr << "Unable to open file Shape1.txt";
		exit(1);   // call system to stop
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			char currentChar;

			mShape1 >> currentChar;

			if (currentChar == '.')
			{
				mShape1Piece[i][j] = ' ';
			}
			if (currentChar == 'x')
			{
				mShape1Piece[i][j] = 'x';
			}
		}
	}

	mShape1.close();

#pragma region Printing the shape

	std::cout << "Shape 1 Loaded: \n";

	for (int row = 0; row < 4; row++)
	{
		for (int column = 0; column < 4; column++)
		{
			std::cout << mShape1Piece[row][column];
		}
		std::cout << "\n";
	}

#pragma endregion

	PAUSE;
	

}
void Tetriminos::getShape2()
{
	std::ifstream mShape2;
	mShape2.open("Shapes\\Shape2.txt");

	if (!mShape2) {
		std::cerr << "Unable to open file Shape2.txt";
		exit(1);   // call system to stop
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			char currentChar2;

			mShape2 >> currentChar2;

			if (currentChar2 == '.')
			{
				mShape2Piece[i][j] = ' ';
			}
			if (currentChar2 == 'x')
			{
				mShape2Piece[i][j] = 'x';
			}
		}
	}


	mShape2.close();

#pragma region Printing the shape


	std::cout << "Shape 2 Loaded: \n";

	for (int row = 0; row < 4; row++)
	{
		for (int column = 0; column < 4; column++)
		{
			std::cout << mShape2Piece[row][column];

		}
		std::cout << "\n";
	}

#pragma endregion


	PAUSE;


}
void Tetriminos::getShape3()
{
	std::ifstream mShape3;

	mShape3.open("Shapes\\Shape3.txt");

	if (!mShape3) {
		std::cerr << "Unable to open file Shape3.txt";
		exit(1);   // call system to stop
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			char currentChar;

			mShape3 >> currentChar;

			if (currentChar == '.')
			{
				mShape3Piece[i][j] = ' ';
			}
			if (currentChar == 'x')
			{
				mShape3Piece[i][j] = 'x';
			}
		}
	}


	mShape3.close();

#pragma region Printing the shape


	std::cout << "Shape 3 Loaded: \n";

	for (int row = 0; row < 4; row++)
	{
		for (int column = 0 ; column < 4; column++)
		{
			std::cout << mShape3Piece[row][column];

		}
		std::cout << "\n";
	}

#pragma endregion


	PAUSE;

}
void Tetriminos::getShape4()
{
	std::ifstream mShape4;

	mShape4.open("Shapes\\Shape4.txt");

	if (!mShape4) {
		std::cerr << "Unable to open file Shape4.txt";
		exit(1);   // call system to stop
	}

	for (int i = 0 ; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			char currentChar;

			mShape4 >> currentChar;

			if (currentChar == '.')
			{
				mShape4Piece[i][j] = ' ';
			}
			if (currentChar == 'x')
			{
				mShape4Piece[i][j] = 'x';
			}
		}
	}


	mShape4.close();

#pragma region Printing the shape


	std::cout << "Shape 4 Loaded: \n";

	for (int row = 0 ; row < 4; row++)
	{
		for (int column = 0; column < 4; column++)
		{
			std::cout << mShape4Piece[row][column];

		}
		std::cout << "\n";
	}

#pragma endregion


	system("pause");

}
void Tetriminos::getShape5()
{
	std::ifstream mShape5;

	mShape5.open("Shapes\\Shape5.txt");

	if (!mShape5) {
		std::cerr << "Unable to open file Shape5.txt";
		exit(1);   // call system to stop
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			char currentChar;

			mShape5 >> currentChar;

			if (currentChar == '.')
			{
				mShape5Piece[i][j] = ' ';
			}
			if (currentChar == 'x')
			{
				mShape5Piece[i][j] = 'x';
			}
		}
	}


	mShape5.close();

#pragma region Printing the shape


	std::cout << "Shape 5 Loaded: \n";

	for (int row = 0; row < 4; row++)
	{
		for (int column = 0; column < 4; column++)
		{
			std::cout << mShape5Piece[row][column];

		}
		std::cout << "\n";
	}

#pragma endregion


	system("pause");

}
void Tetriminos::getShape6()
{
	std::ifstream mShape6;

	mShape6.open("Shapes\\Shape6.txt");

	if (!mShape6) {
		std::cerr << "Unable to open file Shape6.txt";
		exit(1);   // call system to stop
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			char currentChar;

			mShape6 >> currentChar;

			if (currentChar == '.')
			{
				mShape6Piece[i][j] = ' ';
			}
			if (currentChar == 'x')
			{
				mShape6Piece[i][j] = 'x';
			}
		}
	}


	mShape6.close();

#pragma region Printing the shape


	std::cout << "Shape 6 Loaded: \n";

	for (int row = 0; row < 4; row++)
	{
		for (int column = 0; column < 4; column++)
		{
			std::cout << mShape6Piece[row][column];

		}
		std::cout << "\n";
	}

#pragma endregion


	system("pause");

}
void Tetriminos::getShape7()
{
	std::ifstream mShape7;

	mShape7.open("Shapes\\Shape7.txt");

	if (!mShape7) {
		std::cerr << "Unable to open file Shape7.txt";
		exit(1);   // call system to stop
	}

	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			char currentChar;

			mShape7 >> currentChar;

			if (currentChar == '.')
			{
				mShape7Piece[i][j] = ' ';
			}
			if (currentChar == 'x')
			{
				mShape7Piece[i][j] = 'x';
			}
		}
	}


	mShape7.close();

	std::cout << "Shape 7 Loaded: \n";

#pragma region Printing the shape


	for (int row = 0; row < 4; row++)
	{
		for (int column = 0; column < 4; column++)
		{
			std::cout << mShape7Piece[row][column];

		}
		std::cout << "\n";
	}

#pragma endregion


	system("pause");

	mShape7.close();

}
