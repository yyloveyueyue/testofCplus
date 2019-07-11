#include<iostream>
using namespace std;
#include "wall.cpp"
#include "snack.cpp "
#include "food.cpp"
#include<ctime>

int main()
{
    //添加随机种子
    srand((unsigned int)time(NULL));

    Wall wall;
    wall.initWall();
    

    Snake snack(wall);
    snack.initSnake();
    // snack.delPoint();

    Food food(wall);
    food.setFood();

    wall.drwaWall();
    //测试
    // wall.setWall(5, 5, '=');
    // wall.setWall(5, 6, '=');
    // wall.setWall(5, 7, '@');
    // wall.drwaWall();

    system("pause");
    return EXIT_SUCCESS;
}
