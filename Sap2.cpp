
#include <iostream>
using namespace std;
class A
{
protected:
    int a;

public:
    A()
    {
        cout << "\nWe're in Base Class. Initializing own data member as 5..";
        a = 5;
        cout << "\na: " << a;
    }
    ~A()
    {
        cout << "\nDestructor Invoked!!";
    }
};
class B : public A
{

protected:
    int b;

public:
    B()
    {
        cout << "\nWe're in Derived Class. Now Adding 5 to base class data member and initializing own data member as 1..";
        a += 5;
        b = 1;
        cout << "\na: " << a << endl;
        cout << "\nb: " << b << endl;
    }
    ~B()
    {
        cout << "\nDestructor Invoked!!";
    }
};
class C : public B
{

public:
    C()
    {
        cout << "\nWe're in Derived Class. Now Adding 5 to base class data member and previous class data member";
        a += 5;
        b += 5;
        cout << "\na: " << a << endl;
        cout << "\nb: " << b << endl;
    }
    ~C()
    {
        cout << "\nDestructor Invoked!!";
    }
};

int main(void)
{
    C ob3;
    return 0;
}
// END OF LINE