#include<iostream>
using namespace std;

class animals
{
public:
    virtual void speak(){
        cout << "animals are speaking" << endl;
    }
};

class cat:public animals
{
public:
    virtual void speak(){
        cout << "cat is speaking" << endl;
    }
};

void test01(){
    animals *ani = new cat;
    ani->speak();
}



int main()
{
    test01();
    system("pause");
    return EXIT_SUCCESS;
}