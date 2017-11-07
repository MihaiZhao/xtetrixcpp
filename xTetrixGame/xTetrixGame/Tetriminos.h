#ifndef _Tetriminos_
#define _Tetriminos_


#define PAUSE system("pause")
#define CLEARSCREEN system("cls")

#include <fstream>
#include <stdlib.h>
#include <iostream>
#include <string>
#include <vector>

int const k_X = 0;
int const k_Y = 1;

int const k_rows = 5;
int const k_columns = 5;

int const k_squarePiece = 0;
int const k_IPiece = 1;
int const k_LPiece = 2;
int const k_LMirroredPiece = 3;
int const k_NPiece = 4;
int const k_NMirroredPiece = 5;
int const k_TPiece = 6;

int const k_XAndYPosArraySize = 8;




// --------------------------------------------------------------------------------
//									 Pieces
// --------------------------------------------------------------------------------

class Tetriminos
{
private:
	
public:
	Tetriminos();
	~Tetriminos();

	char m_Pieces[7][4][5][5];

	int squareCellsPositions[k_XAndYPosArraySize];
	int ICellsPositions[k_XAndYPosArraySize];
	int LCellsPositions[k_XAndYPosArraySize];
	int LMirroredCellPositions[k_XAndYPosArraySize];
	int NCellsPositions[k_XAndYPosArraySize];
	int NMirroredCellsPositions[k_XAndYPosArraySize];
	int TCellsPositions[k_XAndYPosArraySize];


	// Functions 
	void initTetriminos();

	void readPieceFromFile
	(
		std::string fileName	/*	File name		*/,
		int p_Piece				/*	Piece 			*/,
		int p_Rotation			/*	Piece Rotation	*/,
		int p_XAndYPosList[]	/*	Piece Rotation	*/
	);
	
};

#endif // _Tetriminos_