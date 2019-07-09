#pragma once
#include<iostream>
#include<string>
using namespace std;

template<class T1,class T2>
class Person
{
public:
    Person(T1 name, T2 age);
    void ShowPerson();
    T1 mName;
    T2 nAge;
};

template<class T1,class T2>
Person<T1,T2>::Person(T1 name, T2 age)
{
    this->mName = name;
    this->nAge = age;

}


template<class T1,class T2>
void Person<T1,T2>:: ShowPerson()
{
    cout << "name is:" << this->mName << "age is:" << this->nAge << endl;
}