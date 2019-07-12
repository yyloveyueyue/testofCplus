#include <iostream>
using namespace std;
#include "food.cpp"
#include "snack.cpp "
#include "wall.cpp"
#include <conio.h>
#include <ctime>
#include <windows.h>

int main()
{
    //添加随机种子
    srand((unsigned int)time(NULL));

    //是否死亡标示
    bool isDead = false;

    char preKey = NULL;

    Wall wall;
    wall.initWall();

    Food food(wall);
    food.setFood();

    Snake snack(wall, food);
    snack.initSnake();

    wall.drwaWall();

    //接收用户输入
    while (!isDead)
    {
        char key = _getch();

        //判断如果是第一次按←
        if (key == snack.LEFT && preKey == NULL)
        {
            continue;
        }

        do
        {
            if (key == snack.LEFT || key == snack.RIGHT || key == snack.UP || key == snack.DOWN)
            {
                //判断按键是否冲突，如向右运动时按了left方向
                if ((preKey == snack.LEFT && key == snack.RIGHT) || (preKey == snack.RIGHT && key == snack.LEFT) || (preKey == snack.UP && key == snack.DOWN) || (preKey == snack.DOWN && key == snack.UP))
                {
                    key = preKey;
                    continue;
                }

                preKey = key;
                if (snack.move(key) == true)
                {
                    //移动成功
                    system("cls");
                    wall.drwaWall();
                    Sleep(100);
                }
                else
                {
                    isDead = true;
                    break;
                }
            }
            else
            {
                key = preKey;
            }

        } while (!_kbhit()); //当没有键盘输入的时候，返回0
    }

    system("pause");
    return EXIT_SUCCESS;
}