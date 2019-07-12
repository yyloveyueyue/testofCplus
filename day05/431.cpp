#include <cstring>
#include <iostream>

using namespace std;

class Person
{
public:
    Person()
    {
        cout << "begin" << endl;
        pName = (char *)malloc(sizeof("John"));
        strcpy(pName, "John");
        mTall = 150;
        mMoney = 100;
    }
    ~Person()
    {
        cout << "end" << endl;
        // if (pName != NULL)
        // {
        //     free(pName);
        //     pName = NULL;
        // }
    }

public:
    char *pName;
    int mTall;
    int mMoney;
};
void test()
{
    Person person;
    cout << person.pName << person.mTall << person.mMoney << endl;
}
int main()
{
    test();
    system("pause");

    return EXIT_SUCCESS;
}

