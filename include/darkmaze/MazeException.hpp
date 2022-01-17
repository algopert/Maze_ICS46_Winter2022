// MazeException.hpp
//
// ICS 46 Winter 2022
// Project #1: Dark at the End of the Tunnel
//
// Exception thrown when interacting with a Maze object in ways that are
// invalid (e.g., removing a non-existent wall or trying to create a maze
// with an invalid size like 0x0).

#ifndef MAZEEXCEPTION_HPP
#define MAZEEXCEPTION_HPP

#include <string>



class MazeException
{
public:
    MazeException(const std::string& reason);
    std::string getReason() const;

private:
    std::string reason;
};



inline MazeException::MazeException(const std::string& reason)
    : reason{reason}
{
}


inline std::string MazeException::getReason() const
{
    return reason;
}



#endif

