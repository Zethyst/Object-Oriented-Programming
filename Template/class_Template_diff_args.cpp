#include <iostream>
using namespace std;
template <class T1,class T2>
class XYZ
{
private:
    T1 x;
    T2 y;

public:
    void get(T1 i, T2 j)
    {
        x = i;
        y = j;
    }
    void display()
    {
        cout << "\nx: " << x << " y: " << y;
    }
};
int main(void)
{
    XYZ <int,float>x1;
    XYZ <float,int>x2;
    XYZ <int,char>x3;
    XYZ <char,char>x4;
    x1.get(4,5.9);
    x1.display();
    x2.get(5.5,7);
    x2.display();
    x3.get(9,'C');
    x3.display();
    x4.get('A','H');
    x4.display();
    return 0;
}