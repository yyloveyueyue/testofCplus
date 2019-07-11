#pragma once
#include<iostream>
#include "wall.h"
using namespace std;




class Snake
{
public:
    struct Point
    {
        //数据域
        int x;
        int y;
        Point *next;
    };

    Snake(Wall &tmpWall);
    //初始化
    void initSnake();
    
    //销毁节点
    void destroyPoint();

    //添加节点
    void addPoint(int x, int y);

    //删除节点
    void delPoint();


    //移动蛇操作
    

public:
    Point *pHead;
    Wall &wall;

};