//sameena cms1329

#include<iostream>
#include<cmath>
using namespace std;

class Queen
{
private:
	int i,j;
public:

	void Display(int board[8][8]);
	bool isUnderAttack(int board[8][8], int row, int col);
	bool moveNplace(int board[8][8], int col);
	bool solveQueen();

};
