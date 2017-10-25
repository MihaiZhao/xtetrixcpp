#ifndef _Tetriminos_
#define _Tetriminos_


// --------------------------------------------------------------------------------
//									 Pieces
// --------------------------------------------------------------------------------

class Tetriminos
{
public:

	int GetBlockType(int pPiece, int pRotation, int pX, int pY);
	int GetXInitialPosition(int pPiece, int pRotation);
	int GetYInitialPosition(int pPiece, int pRotation);
	Tetriminos();
};

#endif // _Tetriminos_