// PROGRAMMED BY AKSHAT JAISWAL
#include <iostream>
using namespace std;

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
    int get_side()
    {
        return (a);
    }
    // friend class Rectangle;
};
class Rectangle
{
private:
    int l, b;

public:
    Rectangle()
    {
        l = b = 0;
    }
    Rectangle(Square ob)
    {
        l = ob.a;
        b = ob.a;
    }
    Rectangle(Square ob)
    {
        int k = ob.get_side();
        l = b = k;
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
int main(void)
{
    Square s(7);
    Rectangle r;
    r = s;
    r.display();
    return 0;
}
// END OF LINE