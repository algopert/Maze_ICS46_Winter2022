
#include "Alex_common.hpp"


Direction get_direction(int dir)
{
    if (dir == DIR_UP)
        return Direction::up;
    if (dir == DIR_DOWN)
        return Direction::down;
    if (dir == DIR_RIGHT)
        return Direction::right;

    return Direction::left;
}