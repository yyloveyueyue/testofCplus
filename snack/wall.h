#ifndef _WALL_HEAD
#define _WALL_HEAD
#include <iostream>
using namespace std;

class Wall
{
public:
    enum
    {
        ROW = 26, //行数
        COL = 26  //列数
    };

    void initWall(); // 初始化数组

    void drwaWall(); //画出墙

    void setWall(int x,int y, char c); //根据索引设置二维数组中的内容

    char getWall(int x, int y); //根据索引获取当前位置的符号

private:
    char gameArray[ROW][COL];
};

#endif