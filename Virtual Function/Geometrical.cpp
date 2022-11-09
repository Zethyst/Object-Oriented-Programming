#include <iostream>
using namespace std;
class Shape
{
protected:
    int a, b;

public:
    virtual void get() = 0;
    virtual void area() = 0;
};
class Triangle : public Shape
{
public:
    void get()
    {
        cout << "\nEnter the value of Base: ";
        cin >> a;
        cout << "\nEnter the value of Height: ";
        cin >> b;
    }
    void area()
    {
        cout << "\nThe Area of Triangle-> " << 0.5 * a * b;
    }
};
class Rectangle : public Shape
{
public:
    void get()
    {
        cout << "\nEnter the value of Length: ";
        cin >> a;
        cout << "\nEnter the value of Breadth: ";
        cin >> b;
    }
    void area()
    {
        cout << "\nThe Area of Rectangle-> " << a * b;
    }
};
class Cylinder : public Shape
{
public:
    void get()
    {
        cout << "\nEnter the value of Radius: ";
        cin >> a;
        cout << "\nEnter the value of Height: ";
        cin >> b;
    }
    void area()
    {
        cout << "\nThe Area of Cylinder-> " << (2 * 3.14 * a * b) + (2 * 3.14 * a * a);
    }
};

int main(void)
{
    Shape *ptr;
    Triangle t;
    Rectangle r;
    Cylinder c;
    int ch;
    cout << "1. Area of Triangle" << endl;
    cout << "2. Area of Rectangle" << endl;
    cout << "3. Area of Cylinder" << endl;
    cout << "Enter your choice: " << endl;
    cin >> ch;
    if (ch == 1)
    {
        ptr = &t;
        ptr->get();
        ptr->area();
    }
    if (ch == 2)
    {
        ptr = &r;
        ptr->get();
        ptr->area();
    }
    if (ch == 3)
    {
        ptr = &c;
        ptr->get();
        ptr->area();
    }

    return 0;
}