
#include <iostream>
#include <cmath>
using namespace std;

class TwoD
{
protected:
    int x, y;

public:
    TwoD()
    {
        x = y = 0;
    }
    TwoD(int a, int b)
    {
        x = a;
        y = b;
    }
    virtual float find_distance()
    {
        float d;
        d = sqrt((x - 0) * (x - 0) + (y - 0) * (y - 0));
        return (d);
    }
};
class ThreeD : public TwoD
{
private:
    int z;

public:
    ThreeD()
    {
        z = 0;
    }
    ThreeD(int a, int b, int c)
    {
        x = a;
        y = b;
        z = c;
    }
    float find_distance()
    {
        float d;
        d = sqrt((x - 0) * (x - 0) + (y - 0) * (y - 0) + (z - 0) * (z - 0));
        return (d);
    }
    void operator==(ThreeD ob)
    {
        if (x == ob.x && y == ob.y && z == ob.z)
        {
            cout << "\nTwo Objects are equal!!" << endl;
        }
        else
            cout << "\nTwo Objects are not equal!!" << endl;
    }
};
int main(void)
{
    float d;
    TwoD x(1, 2), *ptr;
    // d = x.find_distance();
    // cout << "\nThe Distance from Origin: " << d;
    
    ThreeD z(1, 2, 3);
    ptr = &z;
    d = ptr->find_distance();
    cout << "\nThe Distance from Origin: " << d;

    ThreeD a(1, 5, 7);
    a == z;

    return 0;
}
// END OF LINE