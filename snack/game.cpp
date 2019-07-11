#include<iostream>
using namespace std;
#include "wall.cpp"

int main()
{
    Wall wall;
    wall.initWall();
    // wall.drwaWall();

    //测试
    wall.setWall(5, 5, '=');
    wall.setWall(5, 6, '=');
    wall.setWall(5, 7, '@');
    wall.drwaWall();

    system("pause");
    return EXIT_SUCCESS;
}