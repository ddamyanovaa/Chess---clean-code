#pragma once

#include <iostream>
#include <cmath>
#include <string>

enum Piece { KING, QUEEN, BISHOP, KNIGHT, ROOK, PAWN, EMPTY };
enum Color { WHITE, BLACK, NONE };

class Square
{

	Piece piece;
	Color color;
	int x, y;
public:
	void setSpace(Square*);
	void setEmpty();
	void setPieceAndColor(Piece, Color);
	Piece getPiece();
	Color getColor();
	void setX(int ex) { x = ex; }
	void setY(int why) { y = why; }
	int getX() { return x; }
	int getY() { return y; }
	Square();
};

class Board
{
	Square square[8][8];
	Color turn=WHITE;
	bool isKingMoved(Square* thisKing, Square* thatSpace);
	bool isQueenMoved(Square* thisQueen, Square* thatSpace);
	bool isBishopMoved(Square* thisBishop, Square* thatSpace);
	bool isKnightMoved(Square* thisKnight, Square* thatSpace);
	bool isRookMoved(Square* thisRook, Square* thatSpace);
	bool isPawnMoved(Square* thisPawn, Square* thatSpace);
	bool isMoveMade(int x1, int y1, int x2, int y2);
	void printBoard();
public:
	Square* getSquare(int x, int y) {
		return &square[x][y];
	}
	void setSquare(Square * s, int x, int y){
		square[x][y]=*s;
	}
	bool isMoveDone();

	void setBoard();
	bool hasGameBeenPlayed();
};

