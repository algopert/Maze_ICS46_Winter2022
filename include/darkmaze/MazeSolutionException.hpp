// MazeSolutionException.hpp
//
// ICS 46 Winter 2022
// Project #1: Dark at the End of the Tunnel
//
// Exception thrown by a MazeSolution object when interacting with it in a
// way that's invalid, such as backing up when the solution is already empty
// or extending the solution outside of the boundaries of the maze.

#ifndef MAZESOLUTIONEXCEPTION_HPP
#define MAZESOLUTIONEXCEPTION_HPP

#include <string>



class MazeSolutionException
{
public:
    MazeSolutionException(const std::string& reason);
    std::string getReason() const;

private:
    std::string reason;
};



inline MazeSolutionException::MazeSolutionException(const std::string& reason)
    : reason{reason}
{
}


inline std::string MazeSolutionException::getReason() const
{
    return reason;
}



#endif

