#include <iostream>
using namespace std;

//全局变量
int a = 10;
void test(){
	//局部变量
	int a = 20;
	//全局a被隐藏
	cout << "a:" << a << endl;
    cout << "a:" << ::a << endl;
}
int main()
{
    int a = 10;
    test();
    return EXIT_SUCCESS;
}
