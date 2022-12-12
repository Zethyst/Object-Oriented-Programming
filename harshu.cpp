#include <iostream>
#include <string.h>
using namespace std;
class X
{
protected:
    int l1;
    char *str1;

public:
    X(char *s1)
    {
        l1 = strlen(s1);
        str1 = new char[l1+1];
        str1 = s1;
    }
    ~X()
    {
        cout << "Destructor invoked for class X\n"
             << endl;
    }
};
class Y
{
protected:
    int l2;
    char *str2;

public:
    Y(char *s2)
    {
        l2 = strlen(s2);
        str2 = new char[l2+1];
        strcpy(str2, s2);
    }
    ~Y()
    {
        cout << "Destructor invoked for class Y\n"
             << endl;
    }
};
class Z : public X, public Y
{
    int l3;
    char *str3;

public:
    Z()
    {
        cout<<"\nConstructor Invoked!";
    }
    void concat()
    {
        l3 = l1 + l2;
        str3 = new char[l3];
        strcpy(str3, str1);
        strcat(str3, str2);
    }
    void display()
    {
        cout << "String after conactenation: " << str3 << endl;
    }
    ~Z()
    {
        cout << "Destructor invoked for class Z\n"
             << endl;
    } 
};
int main(void)
{
    X x1("Hi");
    Y y2("Hi");
    Z z3;
    z3.concat();
    z3.display();
    return 0;
}