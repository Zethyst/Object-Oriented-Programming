#include <iostream>
using namespace std;

template <class T>
void f1(T x, T y)
{
    T temp;
    temp=x;
    x=y;
    y=temp;
    cout << "\nx: " << x << "\ny: " << y;
}
int main(void)
{
    f1(4,5);
    f1(5.5,7.7);

    return 0;
}