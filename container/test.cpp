#include<iostream>
#include<string>
using namespace std;
#include<set>

struct Person {
    string name;
    int age;
    Person(string _name, int _age) : name(_name), age(_age){}
    friend  ostream  &operator<<(ostream &os, const Person &per){  //声明为友元
        os << per.name << "   " << per.age << std::endl;
        return os;
    }
};
typedef struct{
    bool operator ()(const Person lhs, const Person rhs){
        if (lhs.name != rhs.name) return lhs.name < rhs.name;
        return lhs.age < rhs.age;
    }
}Compare;
int main(){
    
    set<Person,Compare> personSet;
    personSet.insert(Person("za", 2));
    personSet.insert(Person("zb", 5));
    personSet.insert(Person("za", 3));
    personSet.insert(Person("zb", 4));
    for (auto it = personSet.begin(); it != personSet.end(); it++){
        cout << *it;
    }
    return 0;
}