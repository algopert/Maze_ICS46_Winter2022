// MazeGenerator.hpp
//
// ICS 46 Winter 2022
// Project #1: Dark at the End of the Tunnel
//
// This is an abstract base class for maze generators.  You'll want to create
// a new class that inherits from this class and provides a generateMaze()
// implementation.

#ifndef MAZEGENERATOR_HPP
#define MAZEGENERATOR_HPP



class Maze;



class MazeGenerator
{
public:
    // Because it is an abstract base class, we give this class a virtual
    // destructor.
    virtual ~MazeGenerator() = default;


    // generateMaze() is given a reference to a Maze object.  Its job is
    // to generate a new maze within that Maze object.  It is unwise to
    // assume that the Maze object will be in a particular state when
    // passed in, so it's not a bad idea to start by either removing all
    // walls or adding all walls (depending on the algorithm).
    virtual void generateMaze(Maze& maze) = 0;
};



#endif

