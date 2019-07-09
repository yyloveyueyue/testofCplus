#include <iostream>

using namespace std;
//使用vector容器
#include <vector>
#include<algorithm>

void myPrint(int v)
    {
        cout << v << endl;
    }

void test01()
{
    vector<int> v; //声明一个容器，存放Int数据
    //向容器中存放数据

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);

    //遍历容器中的数据
    //利用迭代器


   

    //第一种遍历方式
    vector<int>::iterator itBegin = v.begin();
    vector<int>::iterator itEnd = v.end();
    // while (itBegin != itEnd)
    // {
    //     cout << *itBegin << endl;
    //     itBegin++;
    // } 

    //第二种遍历方式
    // for (vector<int>::iterator it = v.begin(); it !=v.end(); it++)
    // {
    //     cout << *it << endl;
    // }
    
    //第三种遍历方法 算法
    for_each(v.begin(), v.end(), myPrint);
}

int main()
{
    test01();
    system("pause");
    return EXIT_SUCCESS;
   
}