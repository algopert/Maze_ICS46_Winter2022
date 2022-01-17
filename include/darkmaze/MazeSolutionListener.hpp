// MazeSolutionListener.hpp
//
// ICS 46 Winter 2022
// Project #1: Dark at the End of the Tunnel
//
// A MazeSolutionListener is an object that is notified whenever a MazeSolution
// has been changed (e.g., extended forward one cell).  Each MazeSolution has a
// collection of these listeners registered to it, and these listeners are then
// notified of changes.
//
// You're unlikely to need this yourself, though I used it in the GUI so that
// the maze's solution would be redrawn whenever it changed.

#ifndef MAZESOLUTIONLISTENER_HPP
#define MAZESOLUTIONLISTENER_HPP



class Maze;
class MazeSolution;



class MazeSolutionListener
{
public:
    virtual void mazeSolutionChanged(
        Maze& maze, MazeSolution& mazeSolution) = 0;
};



#endif

