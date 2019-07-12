#include <iostream>
using namespace std;

/*
1.认识引用
 */

void test01()
{
    int a = 10;
    int &b = a;
    cout << "a:" << a << endl;
    cout << "b:" << b << endl;
    cout << "----------------" << endl;
    // 操作b就相当于操作a本身
    b = 100;
    cout << "a:" << a << endl;
    cout << "b:" << b << endl;
    cout << "----------------" << endl;
    //一个变量可以有n个别名
    int &c = a;
    c = 200;
    cout << "a:" << a << endl;
    cout << "b:" << b << endl;
    cout << "c:" << c << endl;
    cout << "------------" << endl;
    //a,b,c的地址都是相同的
    cout << "a:" << &a << endl;
    cout << "b:" << &b << endl;
    cout << "c:" << &c << endl;
}

void test02()
{
    //1.建立数组引用方法一
    typedef int ArrRef[10];
    int arr[10];
    ArrRef &aRef = arr;
    for (int i = 0; i < 10; i++)
    {
        aRef[i] = i + 1;
    }
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << "";
    }
    cout << endl;

    //2.建立数组引用方法二
    int(&f)[10] = arr;
    for (int i = 0; i < 10; i++)
    {
        f[i] = i + 10;
    }
    for (int i = 0; i < 10; i++)
    {      
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    // test01();
    test02();

    return EXIT_SUCCESS;
}