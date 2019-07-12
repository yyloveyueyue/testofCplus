#include <iostream>
using namespace std;

void func1()
{
    const int a = 10;
#define A 20
    //#undef A  //卸载宏常量A
}
void func2()
{
    // cout << "a:" << a << endl; //不可访问，超出了const int a作用域
    cout << "A:" << A << endl; //#define作用域从定义到文件结束或者到#undef，可访问
}
int main()
{
    func2();
    return EXIT_SUCCESS;
}
