
#include <iostream>
#include <string>
using namespace std;
struct Student
{
    string mName;
    int mAge;
    void setName(string name) { mName = name; }
    void setAge(int age) { mAge = age; }
    void showStudent()
    {
        cout << "Name:" << mName << " Age:" << mAge << endl;
    }
};

//2. c++中定义结构体变量不需要加struct关键字
void test01()
{
    Student student;
    student.setName("John");
    student.setAge(20);
    student.showStudent();
}

int main()
{
    test01();
    return EXIT_SUCCESS;
}