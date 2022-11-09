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
    void display()
    {
        if (ima < 0)
            cout << real << "-" << ima << "i" << endl;
        else
            cout << real << "+" << ima << "i" << endl;
    }
    friend Complex operator+(Complex, Complex);
    friend Complex operator*(Complex, Complex);
};
Complex operator+(Complex ob1, Complex ob2)
{
    Complex t;
    t.real = ob1.real + ob2.real;
    t.ima = ob1.ima + ob2.ima;
    return (t);
}
Complex operator*(Complex ob1, Complex ob2)
{
    Complex t;
    t.real = ob1.real * ob2.real;
    t.ima = ob1.ima * ob2.ima;
    return (t);
}
int main(void)
{
    Complex c1(1, 2);
    Complex c2(6, 7);
    Complex result;

    cout << "\n1st Complex Number: ";
    c1.display();
    cout << "\n2nd Complex Number: ";
    c2.display();

    cout << "\nAfter Addition of two complex numbers: ";
    result = c1 + c2;

    result.display();

    cout << "\nAfter Multiplication of two complex numbers: ";
    result = c1 * c2;

    result.display();

    return 0;
}
//END OF LINE