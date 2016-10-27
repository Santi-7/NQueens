/* ---------------------------------------------------------------------------
** nQueens.hpp
** Header class for a N Queens solver using Las Vegas algorithm.
**
** Author: Santiago Gil Begué, NIA: 683482
** -------------------------------------------------------------------------*/

#ifndef nQUEENS_NQUEENS_HPP
#define nQUEENS_NQUEENS_HPP

#include <vector>

class NQueens {

public:

    /**
     * Creates a N Queens board of n x n size.
     *
     * @param n size of the N Queens board.
     * @return a N Queens board of n x n size.
     */
    NQueens(const int n);

    /**
     * Tries to solve the N Queens board by Las Vegas algorithm,
     * placing the first k queens randomly, and then
     * doing a backtracking. For this, k must be less or equals
     * than n (size of the board). Returns true if a solution
     * is found, false if not.
     *
     * @param k number of the first queens to place randomly.
     * @return true if a solution is found, false if not.
     */
    bool PlaceQueensLasVegas(const int k);

    /**
     * Returns the board.
     *
     * @return the board.
     */
    std::vector<int> GetBoard() const;

private:

    /* Array that stores the board result.
    /* mBoard[i]=j; means queen at i-th row is placed at j-th column. */
    std::vector<int> mBoard;

    /**
     * Queens before the [row]-th row are correctly placed. Returns true
     * if exists a solution with any combination of the queens at the
     * still no placed rows (from [row]-th row to the last one), It also
     * fills the board with a combination.
     *
     * @param row from which queens are not placed.
     * @return true if exists a solution with any conmbination of the queens
     *         at the still no placed rows (from [row]-th row to the last one),
     */
    bool PlaceQueensBacktracking(const int row);

    /**
     * Check if a queen placed at [row, column] would be killed or not
     * with the current board. The current board shouldn't have any queen
     * placed after row [row],
     *
     * @param row of the current placed queen.
     * @param column of the current placed queen.
     * @return true if the queen can be placed, false if not.
     */
    bool CanPlace(const int row, const int column) const;
};

#endif // nQUEENS_NQUEENS_HPP