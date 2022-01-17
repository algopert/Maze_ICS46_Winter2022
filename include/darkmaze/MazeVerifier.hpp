// MazeVerifier.hpp
//
// ICS 46 Winter 2022
// Project #1: Dark at the End of the Tunnel
//
// Verifier that is able to check whether a given Maze is "perfect" (i.e.,
// there is a unique path from every cell in the maze to every other cell
// in the maze).
//
// The GUI creates one of these and calls it on every maze that's generated
// automatically, so you may not find yourself needing to use this.

#ifndef MAZEVERIFIER_HPP
#define MAZEVERIFIER_HPP



class Maze;



class MazeVerifier
{
public:
    // isPerfectMaze() returns true if the given maze is perfect, false
    // otherwise.
    bool isPerfectMaze(const Maze& maze) const;
};



#endif

