/* PROGRAMED BY AKSHAT JAISWAL*/

#include <iostream>
using namespace std;
class ABC
{
public:
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
    friend void operator++(ABC &);
    friend void operator--(ABC &);

    void display()
    {
        cout << x << "  " << y << "  " << z << endl;
    }
};
void operator++(ABC &ob)
{

    ob.x = ob.x + 1;
    ob.y = ob.y + 1;
    ob.z = ob.z + 1;
}
void operator--(ABC &ob)
{
    ob.x = ob.x - 1;
    ob.y = ob.y - 1;
    ob.z = ob.z - 1;
}
int main(void)
{
    ABC ob(1, 2, 3);
    cout << "\nOriginal => ";
    ob.display();

    cout << "\nAfter Incrementing by 1 => ";
    ++ob;
    ob.display();
    cout << "\nAfter Decrementing by 1 => ";
    --ob;
    ob.display();

    return 0;
}
//END OF LINE