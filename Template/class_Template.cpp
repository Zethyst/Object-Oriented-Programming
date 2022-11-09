#include <iostream>
using namespace std;
template <class T>
class XYZ
{
private:
    T x, y;

public:
    void get(T i, T j)
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
    XYZ <int>x1;
    XYZ <float>x2;
    x1.get(4,5);
    x1.display();
    x2.get(5.5,7.7);
    x2.display();
    return 0;
}