// ========= Includes =========

#include "Tetriminos.h"

// ========= Tetriminos =========

Tetriminos::Tetriminos()
{
}

Tetriminos::~Tetriminos()
{}

void Tetriminos::initTetriminos()
{
	readPieceFromFile("Pieces\\Square-Piece\\SquarePiece.txt"			, k_squarePiece		, 0, squareCellsPositions	);		// Read Square Piece Rotation 0
	readPieceFromFile("Pieces\\I-Piece\\IPiece.txt"						, k_IPiece			, 0, ICellsPositions		);		// Read Square Piece Rotation 0
	readPieceFromFile("Pieces\\L-Piece\\LPiece.txt"						, k_IPiece			, 0, LCellsPositions		);		// Read Square Piece Rotation 0
	readPieceFromFile("Pieces\\L-Mirrored-Piece\\LMirroredPiece.txt"	, k_LMirroredPiece	, 0, LMirroredCellPositions	);		// Read Square Piece Rotation 0
	readPieceFromFile("Pieces\\N-Piece\\NPiece.txt"						, k_squarePiece		, 0, NCellsPositions		);		// Read Square Piece Rotation 0
	readPieceFromFile("Pieces\\N-Mirrored-Piece\\NMirroredPiece.txt"	, k_squarePiece		, 0, NMirroredCellsPositions);		// Read Square Piece Rotation 0
	readPieceFromFile("Pieces\\T-Piece\\TPiece.txt"						, k_squarePiece		, 0, TCellsPositions		);		// Read Square Piece Rotation 0
}

void Tetriminos::readPieceFromFile
(
	std::string fileName	/*	File name		*/,
	int p_Piece				/*	Piece 			*/,
	int p_Rotation			/*	Piece Rotation	*/,
	int p_XAndYPosList[]	/*	Piece Rotation	*/
)
{
	std::ifstream pieceFile;

	pieceFile.open(fileName, std::fstream::in);

	if (!pieceFile.is_open()) {
		std::cerr << "! Warning: Unable to open file: " << fileName << std::endl;
		system("pause");
		exit(1);   // call system to stop
	}

	int arrayIndex = 0;

	for (int x = 0; x < k_rows; x++)
	{
		for (int y = 0; y < k_columns; y++)
		{
			pieceFile >> m_Pieces[p_Piece][p_Rotation][x][y];

			if (m_Pieces[p_Piece][p_Rotation][x][y] == '1')
			{
				p_XAndYPosList[arrayIndex] = x;
				arrayIndex++;
				p_XAndYPosList[arrayIndex] = y;
				arrayIndex++;
			}
		}
	}

	pieceFile.close();


#ifdef _DEBUG // Only on debug mode
	std::cout << "Debug --> Read successes from file: " << fileName << std::endl;
#else
#endif
}
