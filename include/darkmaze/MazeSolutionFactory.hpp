// MazeSolutionFactory.hpp
//
// ICS 46 Winter 2022
// Project #1: Dark at the End of the Tunnel
//
// This class is what you would use when you want to create a new MazeSolution
// object.  Note, though, that you're unlikely to need to do that; the GUI
// creates a MazeSolution object for you and passes it to your MazeSolver.

#ifndef MAZESOLUTIONFACTORY_HPP
#define MAZESOLUTIONFACTORY_HPP

#include <memory>


class Maze;
class MazeSolution;


class MazeSolutionFactory
{
public:
    // Given a Maze, this function creates a new MazeSolution object
    // for that Maze and returns a unique_ptr to it.
    std::unique_ptr<MazeSolution> createMazeSolution(Maze& maze);
};



#endif

