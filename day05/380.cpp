#include <iostream>
using namespace std;

int main()
{
    int a = 10;
    int b = 20;
    
    printf("ret:%d\n", a > b ? a : b);

    cout << "b:" << b << endl;
    (a>b?a:b)=100;
    cout << "b:" << b << endl;
    cout << "a:" << a << endl;

    return EXIT_SUCCESS;
}
