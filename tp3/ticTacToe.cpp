#include "ticTacToe.h"


TicTacToe::TicTacToe(){}

bool TicTacToe::makeMoveX(int x, int y){	return false;	}
bool TicTacToe::makeMoveO(int x, int y){	return false;	}

TicTacToe::etat TicTacToe::etatJeux()  { return CONTINUER;	}

bool TicTacToe::mouvValid(int x, int y) const{ return false;}

void TicTacToe::recommence()		{
	//
}

void TicTacToe::affichTab() const	{}

void TicTacToe::getXOMouv(char c)	{}
void TicTacToe::jouer() 			{}
