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
   friend void operator - (Zethyst);
    void operator*()
    {
        x = x * x;
        y = y * y;
        z = z * z;
    }
    void operator++()
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
     void operator - (Zethyst ob)
    {
        ob.x = ob.x + 5;
        ob.y = ob.y + 5;
        ob.z = ob.z + 5;
    }
int main(void)
{
    Zethyst ob(1, 2, 3);
    cout<<"\nOriginal => ";
    ob.display();
    //+(ob);
    cout<<"\nAfter Adding 5 to it => ";
    ob.display();
    cout<<"\nAfter Subtracting 2 from it => ";
    ob.display();
    *ob;
    cout<<"\nAfter Multiplying by itself => ";
    ob.display();
    cout<<"\nAfter Incrementing by 1 => ";
    ++ob;
    ob.display();
    cout<<"\nAfter Decrementing by 1 => ";
    --ob;
    ob.display();

    return 0;
}