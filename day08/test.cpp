#include<iostream>
#include"Person.hpp"
using namespace std;


int main()
{
    Person<string, int> person("yuanye", 24);
    person.ShowPerson();
    system("pause");
    return EXIT_SUCCESS;
}