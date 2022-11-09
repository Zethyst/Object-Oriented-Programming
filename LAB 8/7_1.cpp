/* PROGRAMED BY AKSHAT JAISWAL*/

#include <iostream>
using namespace std;
class ABC
{
private:
    int x, y, z;

public:
    ABC()
    {
        x = y = z = 0;
    }
    ABC(int p, int q, int r)
    {
        x = p;
        y = q;
        z = r;
    }
    void operator-()
    {
        x = x - 2;
        y = y - 2;
        z = z - 2;
    }
    void display()
    {
        cout << x << "  " << y << "  " << z << endl;
    }
};
int main(void)
{
    ABC ob(5, 6, 7);
    cout << "\nOriginal => ";
    ob.display();
    -ob;
    cout << "\nAfter Subtracting 2 from it => ";
    ob.display();

    return 0;
}
//END OF LINE