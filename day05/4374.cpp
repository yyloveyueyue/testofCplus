#include<iostream>
#include<string>
using namespace std;
/*
用单例模式模拟公司员工使用打印机场景，打印机可以打印员工要输出的内容，并计次。
 */

class Printer
{
private:   // 将默认构造和拷贝构造私有化
    Printer() { mTimes = 0; }
    Printer(const Printer&){}

private:    //维护私有化一个对象指针
    static Printer* pPrinter;
    int mTimes;

public:
    //提供getInstance函数方法指向这个指针
    static Printer *getInstance() { return pPrinter; }
    void PrintText(string text)
    {
        cout << "content of print: " << text << endl;
        cout << "times of print: " << mTimes << endl;
        cout << "--------------------------"<< endl;
        mTimes++;

    }
};
Printer *Printer::pPrinter = new Printer;   //初始化对象指针

void test()
{
    Printer *printer = Printer::getInstance();
    printer->PrintText("get out");
    printer->PrintText("come in");

}



int main()
{
    test();
    system("pause");
    return EXIT_SUCCESS;
}