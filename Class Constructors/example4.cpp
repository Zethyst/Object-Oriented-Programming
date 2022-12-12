#include <iostream>
using namespace std;
class A
{
private:
    int a, b;

public:
    A(int x,int y)
    {
        a = x;
        b = y;
    }
    void display()
    {
        cout << a << "  " << b << endl;
    }
};
class B
{
private:
    int s,t,u;

public:
    B(int p,int q,int r)
    {
        s = p;
        t = q;
        u = q+r;

    }
    void display()
    {
        cout << "  " << s << endl;
    }
};

int main(void)
{
    A ob1(5,6);
    B ob(7,8,9);
    ob.display();
    ob.display();
    return 0;
}