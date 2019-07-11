# include "wall.h"

void Wall::initWall()
{
for (int i = 0; i < ROW;i++)
	{
		for (int j = 0; j < COL;j++)
		{
			//墙的条件
			if (i == 0 || i == ROW - 1 || j == 0 || j == COL -1)
			{
				gameArray[i][j] = '*';
			}
			else
			{
				gameArray[i][j] = ' ';
			}
		}
	}

}


void Wall::drwaWall()
{
	for (int i = 0; i < ROW;i++)
	{
		for (int j = 0; j < COL;j++)
		{
			cout << gameArray[i][j] << ' '; //加一个空格间隙，打印出来比较好看
		}
		//版本信息以及其他提示信息
		if (i == 5)
		{
			cout << " Snake Game V1.0" << " ";
		}
		if (i == 6)
		{
			cout << " Create by zt, 2019-07-10" << " ";
		}
		if (i == 7)
		{
			cout << " up    : w" << " ";
		}

		if (i == 8)
		{
			cout << " down  : s" << " ";
		}

		if (i == 9)
		{
			cout << " left  : a" << " ";
		}

		if (i == 10)
		{
			cout << " right : d" << " ";
		}
		cout << endl; //打印换行
	}
}


void Wall::setWall(int x, int y, char key)
{
	gameArray[x][y] = key;
}

char Wall::getWall(int x, int y)
{
	return gameArray[x][y];
}
