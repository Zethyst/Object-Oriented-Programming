// PROGRAMMED BY AKSHAT JAISWAL
#include <iostream>
using namespace std;

class Rectangle
{
private:
    int l, b;

public:
    Rectangle()
    {
        l = b = 0;
    }
    Rectangle(int p, int q)
    {
        l = p;
        b = q;
    }
    void display()
    {
        cout << "\nLength is: " << l;
        cout << "\nBreadth is: " << b;
    }
};
class Square
{
private:
    int a;

public:
    Square()
    {
        a = 0;
    }
    Square(int side)
    {
        a = side;
    }
    operator Rectangle()
    {
        Rectangle r(a, a);
        return r;
    }
};
int main(void)
{
    Square s(7);
    Rectangle r;
    r = s;
    r.display();
    return 0;
}
// END OF LINE