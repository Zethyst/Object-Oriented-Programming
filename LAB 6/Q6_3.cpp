#include <iostream>
using namespace std;
class Circle
{
protected:
    int radius;

public:
    Circle()
    {
        radius = 4;
    }
    virtual void area()
    {
        cout << "\nThe Area of Circle: " << 3.14 * radius * radius;
    }
};
class Rectangle : public Circle
{

public:
    Rectangle()
    {
        radius = 7;
    }
    void area()
    {
        cout << "\nThe Area of Rectangle: " << radius * radius;
    }
};
class CYLINDER : public Circle
{
private:
    int height;

public:
    CYLINDER()
    {
        height = 3;
        radius = 9;
    }

    void area()
    {
        cout << "\nThe Volume of Cylinder: " << 3.14 * radius * radius * height;
    }
};

int main(void)
{
    Rectangle rec, *p1;
    Circle cic, *p2;
    CYLINDER cy, *p3;
    p1 = &rec;
    p2 = &cic;
    p3 = &cy;
    p1->area();
    p2->area();
    p3->area();

    return 0;
}