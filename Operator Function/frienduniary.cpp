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
    void operator+(ABC ob)
    {
        i = i + ob.i;
        j = j + ob.j;
    }
    void display()
    {
        cout << "\ni: " << i;
        cout << "\nj: " << j;
    }
    friend ABC operator+(ABC);
};
ABC operator+(ABC ob)
{
    ABC t;
    t.i = ob.i + 5;
    t.j = ob.j + 5;
    return (t);
}
int main(void)
{
    ABC d1(1, 2);
    ABC d2;
    cout << "\nObject 1's Data Members => ";
    d1.display();

    d2 = +d1;

    cout << "\nAfter adding 5 to Object 1 ---->\nObject 1 => ";
    d1.display();
    cout<<"\nObject 2 => ";
    d2.display();

    return 0;
}