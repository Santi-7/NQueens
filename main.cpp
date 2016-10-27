/* ---------------------------------------------------------------------------
** main.cpp
** TODO: Add doc.
**
** Author: Miguel Jorge Galindo Ramos, NIA: 679954
**         Santiago Gil Begué, NIA: 683482
** -------------------------------------------------------------------------*/

#include <iostream>
#include <nQueens.hpp>

using namespace std;

int main()
{
    NQueens board(4);
    cout << board.PlaceQueensBacktracking(0);
}