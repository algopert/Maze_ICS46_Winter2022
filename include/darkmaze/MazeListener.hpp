// MazeListener.hpp
//
// ICS 46 Winter 2022
// Project #1: Dark at the End of the Tunnel
//
// A MazeListener is an object that is notified whenever a Maze has been
// changed (e.g., having a wall removed).  Each Maze has a collection of
// these listeners registered to it, and these listeners are then notified
// of changes.
//
// You're unlikely to need this yourself, though I used it in the GUI so
// that the maze would be redrawn whenever the maze changed.

#ifndef MAZELISTENER_HPP
#define MAZELISTENER_HPP



class Maze;



class MazeListener
{
public:
    virtual void mazeChanged(Maze& maze) = 0;
};



#endif

