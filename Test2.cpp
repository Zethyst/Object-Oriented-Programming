// PROGRAMMED BY AKSHAT JAISWAL
#include <iostream>
using namespace std;
class Area
{
private:
    int a;

public:
    void A(int a)
    {
        cout << "\nThe Area of Cube: " << 6 * a * a;
    }
    void A(int r, int h)
    {
        cout << "\nThe Area of Cylinder: " << 3.14 * r * r * h;
    }
    void A(double r)
    {
        cout << "\nThe Area of Sphere: " << 4 * 3.14 * r * r;
    }
};
int main(void)
{
    Area ob;
    ob.A(3);
    ob.A(5, 6);
    ob.A(7.7);
    return 0;
}
// END OF LINE