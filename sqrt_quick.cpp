#include<iostream>
using namespace std;

float Q_rsqrt(float number)
{
    long i;
    float x2,y;
    const float threehalfs = 1.5F;

    x2 = number * 0.5F;
    y=number;
    i = *(long *)&y;
    i = 0x5f3759df - (i >> 1);
    y = *(float *)&i;
    y = y * (threehalfs - (x2 * y * 2));
    return y;
}
int main()
{
    float number = 5;
    cout << Q_rsqrt(number) << endl;
    system("pause");
    return EXIT_SUCCESS;
}