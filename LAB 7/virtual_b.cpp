#include <iostream>
using namespace std;
class ABC
{
public:
    virtual void display()
    {
        cout << "\nWe're inside Base Class ABC!";
    }
};
class BBC : public ABC
{
    void display()
    {
        cout << "\nWe're inside Derived Class BBC!";
    }
};
class KBC : public ABC
{
    void display()
    {
        cout << "\nWe're inside Derived Class KBC!";
    }
};
int main(void)
{
    ABC a, *ptr;
    ptr = &a;
    ptr->display();
    BBC b;
    ptr = &b;
    ptr->display();
    KBC c;
    ptr = &c;
    ptr->display();

    return 0;
}