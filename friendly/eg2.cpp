#include <iostream>
using namespace std;

class abc
{
private:
    int i, j;
public:
    void get()
    {
        cout << "Enter the values of i & j: ";
        cin >> i >> j;
    }
    void display()
    {
        cout << "Value of i is " << i << " and j is " << j << endl;
    }
    abc friend compute(abc &a11)
    {
        abc t;
        t.i = a11.i + 10;
        t.j = a11.j + 15;
        return t;
    }
};
int main(void)
{
    abc a1, a2, a3;
    a1.get();
    a1.display();
    compute(a1);
    a1.display();
    a3 = compute(a1);
    a3.display();
    return 0;
}