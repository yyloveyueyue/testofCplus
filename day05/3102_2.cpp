#include<iostream>
using namespace std;   
//返回局部变量引用
int& TestFun01(){
	int a = 10; //局部变量
	// return a;
}
//返回静态变量引用
int& TestFunc02(){	
	static int a = 20;
	cout << "static int a : " << a << endl;
	return a;
}
int main(){
	//不能返回局部变量的引用
	// int& ret01 = TestFun01();
	//如果函数做左值，那么必须返回引用
	TestFunc02();
	TestFunc02() = 100;
	TestFunc02();

	return EXIT_SUCCESS;
}
