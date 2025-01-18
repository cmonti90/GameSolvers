#ifndef TANGO_SOLVER_H
#define TANGO_SOLVER_H

// This class is responsible for solving the Tango puzzle.


namespace Tango
{

class TangoSolver
{
public:

    TangoSolver();
    ~TangoSolver();
    void Solve();


private:

    void Initialize();
    void SolvePuzzle();
    void PrintSolution();

    // The puzzle board.
    int m_board[4][4];

    // The solution board.
    int m_solution[4][4];

    // The number of solutions found.
    int m_solutionCount;

    // The number of moves made.
    int m_moveCount;

    // The number of backtracks made.
    int m_backtrackCount;

    // The number of recursive calls made.
    int m_recursiveCallCount;

    // The number of solutions to find.
    int m_solutionLimit;

    // The number of moves to make.
    int m_moveLimit;

    // The number of backtracks to make.
    int m_backtrackLimit;

    // The number of recursive calls to make.
    int m_recursiveCallLimit;

    // The number of solutions to find.
    static const int SOLUTION_LIMIT = 1;

    // The number of moves to make.
    static const int MOVE_LIMIT = 100;

    // The number of backtracks to make.
    static const int BACKTRACK_LIMIT = 100;

    // The number of recursive calls to make.
    static const int RECURSIVE_CALL_LIMIT = 100;

    // The number of moves to make.
    static const int MOVE_COUNT = 0;

    // The number of backtracks to make.
    static const int BACKTRACK_COUNT = 0;

    // The number of recursive calls to make.
    static const int RECURSIVE_CALL_COUNT = 0;

    // The number of solutions found.
    static const int SOLUTION_COUNT = 0;

    // The number of solutions found.
    static const int SOLUTION = 1;

    // The number of solutions found.
    static const int NO_SOLUTION = 0;

    // The number of solutions found.
    static const int MOVE = 1;

    // The number of solutions found.
    static const int NO_MOVE = 0;

    // The number of solutions found.
    static const int BACKTRACK = 1;

    // The number of solutions found.
    static const int NO_BACKTRACK = 0;

    // The number of solutions found.
    static const int RECURSIVE_CALL = 1;

    // The number of solutions found.
    static const int NO_RECURSIVE_CALL = 0;

    // The number of solutions found.
    static const int BOARD_SIZE

}; // class TangoSolver


} // namespace Tango


#endif // TANGO_SOLVER_H