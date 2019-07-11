#pragma once
#include<iostream>
#include "wall.h"
using namespace std;


class Food
{
public:
    

    Food(Wall &tmpWall);
    //设置食物
    void setFood();

    int foodX;
    int foodY;

    Wall &wall;
};