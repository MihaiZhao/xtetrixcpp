#ifndef _Tetriminos_
#define _Tetriminos_

#include <fstream>
#include <iostream>

#define PAUSE system("pause")
#define CLEARSCREEN system("cls")


// --------------------------------------------------------------------------------
//									 Pieces
// --------------------------------------------------------------------------------

class Tetriminos
{
private:



public:
	Tetriminos();
	~Tetriminos();

	char mShape1Piece[4][4];
	char mShape2Piece[4][4];
	char mShape3Piece[4][4];
	char mShape4Piece[4][4];
	char mShape5Piece[4][4];
	char mShape6Piece[4][4];
	char mShape7Piece[4][4];


	// Functions 
	void initTetriminos();
	void getShape1();
	void getShape2();
	void getShape3();
	void getShape4();
	void getShape5();
	void getShape6();
	void getShape7();
	
};

#endif // _Tetriminos_