#include<iostream>
using namespace std;

template<class T>
class Father
{
public:
    T m_a;
};

// 继承类模板，必须要确定基类的大小
class Child:public Father<int>
{
public:
    int m_b;
};

template<class T1, class T2>
class Child2: public Father<T2>
{
public:
    T1 m_c;
};

void test01(){
    Child2<int, double> child; //由用户指定类型
    cout << sizeof(child) << endl;

}


int main()
{
    test01();
    system("pause");
    return EXIT_SUCCESS;
}