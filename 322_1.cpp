#include <iostream>
using namespace std;

namespace A{
	int a = 10;
}
namespace B{
	int a = 20;
}
void test(){
	cout << "A::a : " << A::a << endl;
	cout << "B::a : " << B::a << endl;
}
int main(){
    test();
    return EXIT_SUCCESS;
}