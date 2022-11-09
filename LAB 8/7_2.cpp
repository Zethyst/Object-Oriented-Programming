/* PROGRAMED BY AKSHAT JAISWAL*/

#include <iostream>
using namespace std;
class ABC
{
private:
    int i, j;

public:
    ABC()
    {
        i = j = 0;
    }
    ABC(int f, int i)
    {
        this->i = f;
        this->j = i;
    }
    void display()
    {
        cout << "\ni: " << i;
        cout << "\nj: " << j;
    }
    friend ABC operator-(ABC);
};
ABC operator-(ABC ob)
{
    ABC t;
    t.i = ob.i - 5;
    t.j = ob.j - 5;
    return (t);
}
int main(void)
{
    ABC d1(1, 2);
    ABC d2;
    cout << "\nObject 1's Data Members => ";
    d1.display();

    d2 = -d1;

    cout << "\nAfter Subtracting 5 from Object 1 => ";
    d2.display();

    return 0;
}
//END OF LINE