#include <iostream>
using namespace std;
class A
{
private:
    int a, b;

public:
    A()
    {
        a = 1;
        b = 1;
    }
    void display()
    {
        cout << a << "  " << b << endl;
    }
};
class B
{
private:
    int c;

public:
    B()
    {
        c = 2;
    }
    void display()
    {
        cout << "  " << c << endl;
    }
};

int main(void)
{
    A ob;
    B ob;
    ob.display();
    ob.display();
    return 0;
}