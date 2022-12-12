#include <iostream>
using namespace std;
class Int
{
    int a, b;

public:
    Int()
    {
        a = b = 0;
    }
    Int(int x, int y)
    {
        a = x;
        b = y;
    }
    friend Int operator+(Int, Int);
    friend Int operator-(Int, Int);
    friend Int operator*(Int, Int);
    friend Int operator/(Int, Int);
    void display()
    {
        cout << "a= " << a << " b= " << b << endl;
    }
};
Int operator+(Int a1, Int a2)
{
    Int a3;
    a3.a = a1.a + a2.a;
    a3.b = a1.b + a1.b;
    if (INT_MIN < a3.a < INT_MAX && INT_MIN < a3.b < INT_MAX)
        return a3;
    else
        cout << "Arithmetic Overflow!!\n";
}
Int operator-(Int a1, Int a2)
{
    Int a3;
    a3.a = a1.a - a2.a;
    a3.b = a1.b - a2.b;
    if (INT_MIN < a3.a < INT_MAX && INT_MIN < a3.b < INT_MAX)
        return a3;
    else
        cout << "Arithmetic Overflow!!\n";
}
Int operator*(Int a1, Int a2)
{
    Int a3;
    a3.a = a1.a * a2.a;
    a3.b = a1.b * a2.b;
    if (INT_MIN < a3.a < INT_MAX && INT_MIN < a3.b < INT_MAX)
        return a3;
    else
        cout << "Arithmetic Overflow!!\n";
}
Int operator/(Int a1, Int a2)
{
    Int a3;
    a3.a = a1.a / a2.a;
    a3.b = a1.b / a2.b;
    if (INT_MIN < a3.a < INT_MAX && INT_MIN < a3.b < INT_MAX)
        return a3;
    else
        cout << "Arithmetic Overflow!!\n";
}
int main(void)
{
    Int a1(9, 10);
    Int a2(10, 20);
    Int a3, a4, a5, a6;
    a3 = a1 + a2;
    a3.display();
    a4 = a1 - a2;
    a4.display();
    a5 = a1 * a2;
    a5.display();
    a6 = a1 / a2;
    a6.display();
    return 0;
}