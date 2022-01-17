// MazeSolver.hpp
//
// ICS 46 Winter 2022
// Project #1: Dark at the End of the Tunnel
//
// This is an abstract base class for maze solvers.  You'll want to create
// a new class that inherits from this class and provides a solveMaze()
// implementation.

#ifndef MAZESOLVER_HPP
#define MAZESOLVER_HPP



class Maze;
class MazeSolution;



class MazeSolver
{
public:
    // Because it is an abstract base class, we give this class a virtual
    // destructor.
    virtual ~MazeSolver() = default;


    // solveMaze() is given a reference to a MazeSolution object,
    // along with a reference to a const Maze object (because it's
    // not permitted to change a Maze in order to solve it).  This
    // function's job is to find a solution to the given maze within
    // the given MazeSolution object.  It is unwise to assume that
    // the MazeSolution object will in a particular state when
    // passed in, so it's not a bad idea to call restart() on it
    // before running your algorithm.
    virtual void solveMaze(
        const Maze& maze, MazeSolution& mazeSolution) = 0;
};



#endif

