/*Name: Akshat Jaiswal
  Roll No: 21052646
  Section: CSE 37
  WAP to Create a class complex which stores real and imaginary part of a complex number. Include all types of constructors and destructor. The destructor should display a message about the destructor being invoked. Create objects using different constructors and display them.
  */

#include <iostream>
using namespace std;
class Complex
{
private:
    int real, ima;

public:
    Complex()
    {
        real = 0;
        ima = 0;
    }
    Complex(int x, int y)
    {
        real = x;
        ima = y;
    }
    ~Complex()
    {
        cout << "\nThe Destructor got invoked!";
    }
    void display()
    {
        cout << "\nThe Complex Number: " << real << "+" << ima << "i";
    }
};
int main(void)
{
    Complex c1;
    c1.display();
    {
        Complex c2(5, 7);
        c2.display();
    }
    Complex c3(1, 3);
    c3.display();
    return 0;
}