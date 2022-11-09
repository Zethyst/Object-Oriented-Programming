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
    friend ABC operator-(ABC, ABC);
};
ABC operator-(ABC ob1, ABC ob2)
{
    ABC ob3;
    ob3.i = ob1.i - ob2.i;
    ob3.j = ob1.j - ob2.j;
    return (ob3);
}
int main(void)
{
    ABC d1(1, 2);
    ABC d2(4, 5);
    ABC d3;
    cout << "\nObject 1's Data Members => ";
    d1.display();
    cout << "\nObject 2's Data Members => ";
    d2.display();

    // d1 + d2;

    // cout << "\nAfter adding Object 2 to Object 1 ---->\nObject 1 => ";
    // d1.display();
    // cout << "\nObject 2 => ";
    // d2.display();

    d3 = d2 - d1;

    cout << "\nAfter Subtracting Object 1 from Object 2 ---->\nObject 1 => ";
    d1.display();
    cout << "\nObject 2 => ";
    d2.display();
    cout << "\nObject 3 => ";
    d3.display();

    return 0;
}