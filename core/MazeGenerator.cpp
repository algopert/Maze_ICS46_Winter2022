
#include "Maze.hpp"
#include <ics46/factory/DynamicFactory.hpp>
#include "Alex_Generator.hpp"
#include "Alex_common.hpp"


ICS46_DYNAMIC_FACTORY_REGISTER(MazeGenerator, Alex_Generator, "Alex's Generator (Required)");



void maze_generate(Maze &maze, vector<vector<bool>> &flag, int x, int y)
{
    int temp_series[4], temp_cnt = 0;
    int dx[4] = {0,1, 0,  -1}; // up, right, down,left  clockwise.
    int dy[4] = {-1, 0, 1, 0};

    flag[x][y] = true; // I have come here!
    int wid= maze.getWidth(), hei = maze.getHeight();
    while (1)
    {
        temp_cnt = 0;
        for (int i = 0; i < 4; i++)
        {
            
            int yy = y + dy[i],  xx = x + dx[i];
            if (xx < 0 || xx >= wid || yy < 0 || yy >=hei || flag[xx][yy])
                continue;
            
            temp_series[temp_cnt++] = i;
        }

        if (temp_cnt == 0)
            break;

        int id = rand() % temp_cnt;

        maze.removeWall(x, y, get_direction(temp_series[id]));
        maze_generate(maze, flag, x + dx[temp_series[id]], y + dy[temp_series[id]]);
            
    }
}

void Alex_Generator::generateMaze(Maze &maze)
{
    maze.addAllWalls();

    vector<vector<bool>> m_flag;
    int height = maze.getHeight();
    int width = maze.getWidth();

    m_flag.resize(width, std::vector<bool>(height, false));

    maze_generate(maze, m_flag, rand() % width, rand() % height);
}
