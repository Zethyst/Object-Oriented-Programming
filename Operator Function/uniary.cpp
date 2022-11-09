#include <iostream>
using namespace std;
class Zethyst
{
private:
    int x, y, z;

public:
    Zethyst()
    {
        x = y = z = 0;
    }
    Zethyst(int p, int q, int r)
    {
        x = p;
        y = q;
        z = r;
    }
    void operator + ()
    {
        x = x + 5;
        y = y + 5;
        z = z + 5;
    }
    void operator + (int)
    {
        x = x + 5;
        y = y + 5;
        z = z + 5;
    }
    void operator-()
    {
        x = x - 2;
        y = y - 2;
        z = z - 2;
    }
    void operator*()
    {
        x = x * x;
        y = y * y;
        z = z * z;
    }
    void operator++(int)
    {
        x++;
        y++;
        z++;
    }
    void operator--()
    {
        x--;
        y--;
        z--;
    }
    void display()
    {
        cout << x << "  " << y << "  " << z << endl;
    }
};
int main(void)
{
    Zethyst ob(1, 2, 3);
    cout<<"\nOriginal => ";
    ob.display();
    // +ob;   //ob.op()
    ob++;
    cout<<"\nAfter Adding 5 to it => ";
    ob.display();
    // -ob;
    // cout<<"\nAfter Subtracting 2 from it => ";
    // ob.display();
    // *ob;
    // cout<<"\nAfter Multiplying by itself => ";
    // ob.display();
    // cout<<"\nAfter Incrementing by 1 => ";
    // ++ob;
    // ob.display();
    // cout<<"\nAfter Decrementing by 1 => ";
    // --ob;
    // ob.display();

    return 0;
}