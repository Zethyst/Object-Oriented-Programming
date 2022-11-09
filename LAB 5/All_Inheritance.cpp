#include <iostream>
using namespace std;
class Parent
{
public:
    void display()
    {
        cout << "\nWe're inside Base Class!" << endl;
    }
};
class Child1 : public Parent
{
public:
    void display()
    {
        cout << "\nWe're inside Child1 Class!";
        cout << "\nThis is Single Inheritance." << endl;
    }
};
class Child2 : public Parent
{
public:
    void display()
    {
        cout << "\nWe're inside Child2 Class!";
        cout << "\nThis is Hierarchical Inheritance." << endl;
    }
};
class Grandchildren : public Child1
{
public:
    void display()
    {
        cout << "\nWe're inside Grandchilden Class!";
        cout << "\nThis is Multilevel Inheritance." << endl;
    }
};
class Sibling : public Child1, public Child2
{
public:
    void display()
    {
        cout << "\nWe're inside Sibling Class!";
        cout << "\nThis is Multiple Inheritance.";
        cout << "\nThis is also Multipath Inheritance.";
    }
};
int main(void)
{
    Parent ob1;
    Child1 ob2;
    Child2 ob3;
    Grandchildren ob4;
    Sibling ob5;
    ob1.display();
    ob2.display();
    ob3.display();
    ob4.display();
    ob5.display();
    return 0;
}