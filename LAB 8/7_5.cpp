/* PROGRAMED BY AKSHAT JAISWAL*/

#include <iostream>
using namespace std;
class Complex
{
private:
    int real, ima;

public:
    Complex()
    {
        real = ima = 0;
    }
    Complex(int r, int i)
    {
        this->real = r;
        this->ima = i;
    }
    void operator+(Complex ob)
    {
        real = real + ob.real;
        ima = ima + ob.ima;
    }
    void operator*(Complex ob)
    {
        real = real * ob.real;
        ima = ima * ob.ima;
    }
    void display()
    {
        if (ima < 0)
            cout << real << "-" << ima << "i" << endl;
        else
            cout << real << "+" << ima << "i" << endl;
    }
};
int main(void)
{
    Complex c1(1, 2);
    Complex c2(6, 7);

    cout << "\n1st Complex Number: ";
    c1.display();
    cout << "\n2nd Complex Number: ";
    c2.display();

    cout << "\nAfter Addition of two complex numbers: ";
    c1 + c2;

    c1.display();
    // c2.display();

    cout << "\nAfter Multiplication of two complex numbers: ";
    c1 *c2;

    c1.display();
    // c2.display();

    return 0;
}
//END OF LINE