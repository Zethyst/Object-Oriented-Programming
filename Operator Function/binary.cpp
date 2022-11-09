#include <iostream>
using namespace std;
class Zethyst
{
private:
    int a, b;

public:
    Zethyst()
    {
        a = b = 0;
    }
    Zethyst(int a, int b)
    {
        this->a = a;
        this->b = b;
    }
    void operator+(Zethyst z)
    {
        a = a + z.a;
        b = b + z.b;
    }
    void operator-(Zethyst &z)
    {
        z.a = a - z.a;
        z.b = b - z.b;
    }
    Zethyst operator*(Zethyst z)
    {   
        Zethyst t;
        t.a = a * z.a;
        t.b = b * z.b;
        return t;
    }
    void display()
    {
        cout << a << "  " << b << endl;
    }
};
int main(void)
{
    Zethyst ob1(4, 2);
    Zethyst ob2(6, 7);
    Zethyst ob3;
    cout << "\nObject 1 Data Members => ";
    ob1.display();
    cout << "\nObject 2 Data Members => ";
    ob2.display();
    ob1 + ob2;  //ob1.operfunc(op2)
    cout << "\nAfter Adding Object 2 to Object 1 => ";
    ob1.display();
    ob3 = ob2 *ob1;
    cout << "\nAfter Multiplying Object 1 to Object 2 => \n";
    cout<<"Object 1 => ";
    ob1.display();
    cout<<"Object 2 => ";
    ob2.display();
    cout<<"Object 3 => ";
    ob3.display();
    ob2-ob1;
    cout<<"\nAfter Subtracting Object 2 from Object 1\nObject 2 => " ;
    ob2.display();
    cout<<"Object 1 => ";
    ob1.display();



    return 0;
}