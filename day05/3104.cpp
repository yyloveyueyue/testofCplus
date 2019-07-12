#include<iostream>
using namespace std;

struct Teacher
{
    int mAge;
};

// 指针间接修改teacher的年龄
void AllocateByPointer(Teacher** teacher){
    *teacher = (Teacher*)malloc(sizeof(Teacher));
    (*teacher)->mAge = 200;
}

//引用修改teacher的年龄
void AllocateByRef(Teacher*& teacher){
    teacher->mAge=300;
}

int main(){
    Teacher* teacher = NULL;
    // 指针间接复制
    AllocateByPointer(&teacher);
    cout <<"Pointer: "<< teacher->mAge <<endl;

    //引用赋值，将teacher本身传到函数中
    AllocateByRef(teacher);
    cout <<"Pointer: "<< teacher->mAge <<endl;
    // free(teacher);

    return EXIT_SUCCESS;
}



