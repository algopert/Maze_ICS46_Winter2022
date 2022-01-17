// MazeFactory.hpp
//
// ICS 46 Winter 2022
// Project #1: Dark at the End of the Tunnel
//
// This class is what you would use when you want to create a new Maze
// object.  Note, though, that you're unlikely to need to do that; the
// GUI creates a Maze object for you and passes it to your MazeGenerator.

#ifndef MAZEFACTORY_HPP
#define MAZEFACTORY_HPP

#include <memory>



class Maze;



class MazeFactory
{
public:
    // Given its width and height, this function creates a new Maze
    // object and returns a unique_ptr to it.
    std::unique_ptr<Maze> createMaze(unsigned int width, unsigned int height);
};



#endif

