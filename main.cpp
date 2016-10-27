/* ---------------------------------------------------------------------------
** main.cpp
** TODO: Add doc.
**
** Author: Santiago Gil Begué, NIA: 683482
** -------------------------------------------------------------------------*/

#include <iostream>
#include <nQueens.hpp>

using namespace std;

int main()
{
    NQueens board(8);
    int n = 0;
    for (int i = 0; i < 200; i++) {
        cout << board.PlaceQueensLasVegas(8);
    }
    cout << n / 200.0;
}