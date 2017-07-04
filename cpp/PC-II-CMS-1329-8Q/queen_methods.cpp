//sameena-cms1329

#include<iostream>
#include"queen_header.h"
#define N 8
using namespace std;

void Queen::Display(int board[N][N])
{
for (int i = 0; i < N; i++)

        {

            for (int j = 0; j < N; j++)

                cout<<board[i][j]<<"  ";

            cout<<endl;

        }

};


bool Queen:: isUnderAttack(int board[N][N], int row, int col)

    {

        int i, j;

        for (i = 0; i < col; i++)

        {

            if (board[row][i])

                return false;

        }

        for (i = row, j = col; i >= 0 && j >= 0; i--, j--)

        {

            if (board[i][j])

                return false;

        }

     

        for (i = row, j = col; j >= 0 && i < N; i++, j--)

        {

            if (board[i][j])

                return false;

        }

     

        return true;

};

    
/*solve N Queen problem */

bool Queen::moveNplace(int board[N][N], int col)

    {

        if (col >= N)

            return true;

        for (int i = 0; i < N; i++)

        {

            if ( isUnderAttack(board, i, col) )

            {

                board[i][col] = 1;

                if (moveNplace(board, col + 1) == true)

                    return true;

                board[i][col] = 0;

            }

        }

        return false;

};

/* solves the N Queen problem using Backtracking.*/

bool Queen::solveQueen()

    {

        int board[N][N] = {0};

        if (moveNplace(board, 0) == false)

        {

            cout<<"Solution does not exist"<<endl;

            return false;

        }

      Display(board);

        return true;
};
  
