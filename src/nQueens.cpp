/* ---------------------------------------------------------------------------
** nQueens.cpp
** Source class for a N Queens solver using Las Vegas algorithm.
**
** Author: Miguel Jorge Galindo Ramos, NIA: 679954
**         Santiago Gil Begué, NIA: 683482
** -------------------------------------------------------------------------*/

#include <math.h>
#include "nQueens.hpp"

NQueens::NQueens(const unsigned int n)
{
    mBoard.resize(n);
}

bool NQueens::PlaceQueensBacktracking(const unsigned int row) const
{
    // Check if we can place thw row-th queen at any column.
    for (unsigned int i = 0; i < mBoard.size(); i++) {
        // Check if queen at row-th row can be placed at i-th column.
        if (CanPlace(row, i)) {
            // Place the row-th queen at this column.
            mBoard[row] = i;
            // It was the last placed queen, a solution has been found.
            if (row == mBoard.size() - 1) {
                return true;
            } else {
                /* If a solution has been found return true, else
                 * check solving with the non-explored columns. */
                if (PlaceQueensBacktracking(row + 1)) {
                    return true;
                }
            }
        }
    }
    // Row-th queen can't be placed in any column.
    return false;
}

bool NQueens::CanPlace(const unsigned int row, const unsigned int column) const
{
    /* Check if a queen can be placed at [row, column], just
     * watching if would be killed by any previous queen . */
    for (unsigned int i = 0; i < row; ++i)
    {
        // The i-th queen would kill the row-th queen.
        /* - mBoard[i] == y2 => columns are same.
         * - |i - row| == |mBoard[i] - column| => in diagonals. */
        if ((mBoard[i] == column) | (abs(i - row) == abs(mBoard[i] - column))) {
            return false;
        }
    }
    // No queen kills the row-th queens.
    return true;
}