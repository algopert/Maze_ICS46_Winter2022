// MazeSolution.hpp
//
// ICS 46 Winter 2022
// Project #1: Dark at the End of the Tunnel
//
// Declares an abstract base class for MazeSolution implementations.  An
// implementation of this class is provided already, though the source code
// for it is not being provided to you.
//
// MazeSolutions, in general, have the following properties:
//
// * They know the size of the maze they're solving, given by a width and a
//   height
// * They know the starting and ending cells of the maze they're solving,
//   given by two std::pair objects, each containing an (x, y) coordinate.
// * They contain a sequence of movements, each in a particular Direction,
//   that lead from the starting cell.
// * They have a "current cell", which is where you would end up if you
//   made all the movements from the starting cell.  For example, if the
//   starting cell is (0, 0) and the movements are [right, right, down],
//   the current cell is (2, 1).
// * They know whether they've reached the ending cell.
// * They can be "extended," by adding one movement to the end of them.
// * They can be "backed up," by removing one movement from the end of
//   them.
// * They can have their entire sequence of movements replaced.
// * They can be "restarted," which removes all of their movements.
// * They can be cloned, meaning that, for some MazeSolution object of
//   type S, you can create a dynamically-allcoated copy of S that has
//   all the same properties.
// * They are "observable," which means that they have a collection of
//   "listeners" associated with them, who are notified whenever the
//   solution changes.  (This is primarily for use in the GUI.)

#ifndef MAZESOLUTION_HPP
#define MAZESOLUTION_HPP

#include <utility>
#include <ics46/observable/Observable.hpp>
#include "Direction.hpp"



class MazeSolutionListener;



class MazeSolution : public ics46::observable::Observable<MazeSolutionListener>
{
public:
    // Because we'll be inheriting from this class, we'll declare the
    // destructor to be virtual, though we don't need it to do anything
    // special.
    virtual ~MazeSolution() = default;


    // getWidth() returns the width of the maze that this is an attempted
    // solution for (i.e., how many cells across is it?)
    virtual unsigned int getWidth() const noexcept = 0;


    // getHeight() returns the height of the maze that this is an attempted
    // solution for (i.e., how many cells tall is it?)
    virtual unsigned int getHeight() const noexcept = 0;


    // getStartingCell() returns a std::pair containing the starting cell's
    // (x, y) coordinate, where x is the first element of the pair and y
    // is the second
    virtual std::pair<int, int> getStartingCell() const noexcept = 0;


    // getEndingCell() returns a std::pair containing the ending cell's
    // (x, y) coordinate, where x is the first element of the pair and y
    // is the second
    virtual std::pair<int, int> getEndingCell() const noexcept = 0;


    // getCurrentCell() returns a std::pair containing the current cell's
    // (x, y) coordinate, where x is the first element of the pair and y
    // is the second
    virtual std::pair<int, int> getCurrentCell() const noexcept = 0;


    // getCells() returns a reference to a const vector of std::pair
    // objects that represent the sequence of cells that make up the
    // solution, where the first element of the vector is the starting
    // cell and the last element of the vector is the current cell
    virtual const std::vector<std::pair<int, int>>& getCells() const = 0;

    
    // getMovements() returns a refrerence to a const vector of Direction
    // objects that represent the sequence of movements that make up the
    // solution
    virtual const std::vector<Direction>& getMovements() const = 0;


    // isComplete() returns true if the solution is complete (i.e., it begins
    // in the starting cell and ends in the ending cell), false otherwise
    virtual bool isComplete() const noexcept = 0;


    // extend() adds a movement to the end of this solution
    virtual void extend(Direction direction) = 0;


    // backUp() removes a movement from the end of this solution
    virtual void backUp() = 0;


    // restart() restarts this solution, meaning that all movements are
    // removed and the current cell is the starting cell
    virtual void restart() = 0;


    // replace() replaces all of the movements in this solution with a new
    // sequence
    virtual void replace(const std::vector<Direction>& directions) = 0;


    // clone() returns a dynamically-allocated copy of a MazeSolution object.
    // The copy will be an object of the same type as the object you
    // call it on, though the pointer's type will be MazeSolution.
    virtual std::unique_ptr<MazeSolution> clone() const = 0;
};



#endif

