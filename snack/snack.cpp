#include "snack.h"

Snake::Snake(Wall &tempWall,Food &tmpfood) : wall(tempWall),food(tmpfood)
{
    pHead = NULL;
}

void Snake::initSnake()
{
    destroyPoint();
    addPoint(5, 3);
    addPoint(5, 4);
    addPoint(5, 5);
}

void Snake::destroyPoint()
{
    Point *pCur = pHead;
    while (pHead != NULL)
    {
        pCur = pHead->next;
        delete pHead;
        pHead = pCur;
    }
}

void Snake::addPoint(int x, int y)
{
    //创建新节点
    Point *newPoint = new Point;
    newPoint->x = x;
    newPoint->y = y;
    newPoint->next = NULL;

    //如果原来头不为空改为身子
    if (pHead != NULL)
    {
        wall.setWall(pHead->x, pHead->y, '=');
    }
    newPoint->next = pHead;
    pHead = newPoint;
    wall.setWall(pHead->x, pHead->y, '@');
}

void Snake::delPoint()
{
    //两个节点以上，才去做删除操作
    if (pHead == NULL || pHead->next == NULL)
    {
        return;
    }
    Point *pCur = pHead->next;
    Point *pPre = pHead;

    while (pCur->next != NULL)
    {
        pPre = pPre->next;
        pCur = pCur->next;
    }

    //删除尾结点
    wall.setWall(pCur->x, pCur->y, ' ');
    delete pCur;

    pCur = NULL;
    pPre->next = NULL;
}

bool Snake::move(char key)
{
    int x = pHead->x;
    int y = pHead->y;
    switch (key)
    {
        case UP:
            x--;
            break;
        case DOWN:
            x++;
            break;
        case LEFT:
            y--;
            break;
        case RIGHT:
            y++;
            break;

    default:
        break;
    }


    //判断用户到达位置是否成功
    if (wall.getWall(x,y)=='*'||wall.getWall(x,y)=='=')
    {
        cout << "GAME OVER" << endl;
        return false;
    }

    //移动成功，分两种
    //1 吃到食物
    if(wall.getWall(x,y)=='#')
    {
        addPoint(x, y);

        //重新设置食物
        food.setFood();
    }
    else           // 2 未吃到食物
    {
        addPoint(x, y);
        delPoint();
    }
    return true;

}