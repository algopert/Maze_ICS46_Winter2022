// MazeSolutionVerifier.hpp
//
// ICS 46 Winter 2022
// Project #1: Dark at the End of the Tunnel
//
// Verifier that is able to check whether a given MazeSolution is correct
// (i.e., it begins at the starting cell, ends at the ending cell, and
// doesn't "cheat" by passing through walls).
//
// The GUI creates one of these and calls it on every maze solution that's
// generated automatically, so you may not find yourself needing to use this.

#ifndef MAZESOLUTIONVERIFIER_HPP
#define MAZESOLUTIONVERIFIER_HPP



class Maze;
class MazeSolution;



class MazeSolutionVerifier
{
public:
    // isCorrect() returns true if the given MazeSolution is a correct
    // solution for the given Maze, false otherwise
    bool isCorrect(Maze& maze, MazeSolution& mazeSolution);
};



#endif

