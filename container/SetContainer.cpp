#include <iostream>
#include <set>
#include <string>
using namespace std;

class Person
{
public:
    Person(string name, int age)
    {
        this->mName = name;
        this->mAge = age;
    }

public:
    string mName;
    int mAge;
};

class ComparePerson
{
public:
    bool operator()(const Person &p1, const Person &p2)
    {
        if (p1.mAge > p2.mAge)
        {
            return true;
        }
        return false;
    }
};

void test()
{
    set<Person,ComparePerson> s1;

    Person p1("son", 20);
    Person p2("smallson", 10);
    Person p3("father", 45);
    Person p4("mother", 40);

    s1.insert(p1);
    s1.insert(p2);
    s1.insert(p3);
    s1.insert(p4);
	for (set<Person, ComparePerson>::iterator it = s1.begin(); it != s1.end(); it++)
	{
		cout << (*it).mAge << (*it).mName << endl;
	}
	
}


// //指定set排序规则 从大到小
// //仿函数
// struct myCompare
// {
// // public:
// 	//重载 ()
// 	bool operator()( const int &v1 , const int& v2)
// 	{
// 		return v1 > v2;
// 	}
// };


// //set容器排序
// void test04()
// {
// 	set<int，myCompare>  s1 = new s2;
	
// 	s1.insert(5);
// 	s1.insert(1);
// 	s1.insert(9);
// 	s1.insert(3);
// 	s1.insert(7);

// 	//printSet(s1);

// 	//从大到小排序
// 	//在插入之前就指定排序规则

// 	// for (set<int, myCompare>::iterator it = s1.begin(); it != s1.end();it++)
// 	// {
// 	// 	cout << *it << " ";
// 	// }
// 	// cout << endl;

// }

int main()
{
    test();
    system("pause");
    return EXIT_SUCCESS;
}