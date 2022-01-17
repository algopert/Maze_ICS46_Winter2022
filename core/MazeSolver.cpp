#include "Maze.hpp"
#include "MazeSolution.hpp"
#include "Alex_Solver.hpp"
#include <ics46/factory/DynamicFactory.hpp>

#include "Alex_common.hpp"

ICS46_DYNAMIC_FACTORY_REGISTER(MazeSolver, Alex_Solver, "Alex's Solver! (Required)");

void solve_maze(const Maze &maze, std::vector<std::vector<bool>> &stat, MazeSolution &mazeSolution, int x, int y)
{
    
    int dx[4] = {0, 1, 0, -1}; // Clockwise
    int dy[4] = {-1,0, 1,  0};

    stat[x][y] = true; // I have come here!

    for (int i = 0; i < 4; i++)
    {
        int xx, yy;
        yy = y+dy[i];
        xx = x+ dx[i];
        if (xx < 0 || xx >= maze.getWidth() || yy < 0 || yy >= maze.getHeight() || stat[xx][yy])
            continue;
        
        if (maze.wallExists(x, y, get_direction(i)))
            continue;

        mazeSolution.extend(get_direction(i));

        if (mazeSolution.isComplete()) return;
        solve_maze(maze, stat, mazeSolution, xx, yy);
        if (mazeSolution.isComplete()) return;
        mazeSolution.backUp();

        
    }
}

void Alex_Solver::solveMaze(const Maze &maze, MazeSolution &mazeSolution)
{
    std::vector<std::vector<bool>> stat;
    stat.resize(maze.getHeight(), std::vector<bool>(maze.getWidth(), false));

    solve_maze(maze, stat, mazeSolution, 0, 0);
}

// NO, This isn't final solution. Tell him to send final solution stored in VM!
// Ok? 