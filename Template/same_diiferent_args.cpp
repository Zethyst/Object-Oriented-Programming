#include <iostream>
using namespace std;

template <class T>
void f1(T x, T y)
{
    T result;
    result = x + y;
    cout << "\nx: " << x << "\ny: " << y << "\nresult: " << result;
}
template <class T1, class T2>
void f2(T1 x, T2 y)
{
    T2 result;
    result = x + y;
    cout << "\nx: " << x << "\ny: " << y << "\nresult: " << result;
}
int main(void)
{
    f1(3, 4);
    f1(4.5,9.9);
    f1('A','B');
    f2(5, 7.7);
    f2('A',10);
    f2(5,'E');


    return 0;
}