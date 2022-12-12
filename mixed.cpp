#include <iostream>
using namespace std;
class op
{
private:
    int x, y, z;

public:
    op()
    {
        cout << "\nCONSTRUCTOR called"<<endl;
    }
    virtual void f1()
    { // virtual function
        cout << "\nIn BASE class";
    }
    op(int a, int b) // parametrized constructor
    {
        x = a;
        y = b;
    }
    void operator+()
    {
        x = x + y;
        y++;
    }
    void display()
    {
        cout<<"\nx: "<<x<<endl;
        cout<<"y: "<<y<<endl;
    }
};
class op2 : public op
{
    void f1()
    {
        cout << "\nIn Derived class";
    }
};
int main()
{
    op2 k;
    op a, *ptr;
    op b(2, 5);
    b.display();
    +b;
    b.display();
    ptr = &k;
    ptr->f1();
}