#include<iostream>
using namespace std;

template<class T>
class Father
{
public:
    T m_a;
};

class Child:public Father<int>
{
public:
    int m_b;
};

int main()
{
    
    system("pause");
    return EXIT_SUCCESS;
}