/* PROGRAMED BY AKSHAT JAISWAL*/

#include <iostream>
using namespace std;
class Integer
{
private:
    int a, b;

public:
    void DataSet()
    {
        cout << "\nEnter the value of a: ";
        cin >> a;
        cout << "\nEnter the value of b: ";
        cin >> b;
    }
    void DataShow()
    {
        cout << "\nThe Values are: " << a << " and " << b;
    }
    friend void operator+(int, Integer &);
    friend void operator+(Integer &, int);
};
void operator+(int x, Integer &ob)
{
    ob.a += x;
    ob.b += x;
}
void operator+(Integer &ob, int y)
{
    ob.a += y;
    ob.b += y;
}

int main(void)
{
    Integer ob;
    ob.DataSet();
    ob.DataShow();
    10 + ob;
    ob.DataShow();
    ob + 7;
    ob.DataShow();
    return 0;
}
//END OF LINE