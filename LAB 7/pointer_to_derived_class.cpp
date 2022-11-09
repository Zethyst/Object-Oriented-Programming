#include <iostream>
using namespace std;
class Base
{
public:
    virtual void func1()
    {
        cout << "\nWe're inside Base Class!";
    }
    void func2()
    {
        cout << "\nWe're inside Non - virtual function of Base Class!";
    }
};
class Derived : public Base
{
public:
    void func1()
    {
        cout << "\nWe're inside Derived Class!";
    }
    void func2()
    {
        cout << "\nWe're inside Non - virtual function of Derived Class!";
    }
};
int main(void)
{
    Base a, *p;
    Derived b;
    // p=&a;
    // p->func1();
    // p->func2();
    p = &b;
    p->func1();
    p->func2();

    return 0;
}