#include <iostream>
using namespace std;

void f1(int p)
{
    try
    {
        if (p > 0)
            throw 'A';
        if (p == 0)
            throw p;
        if (p < 0)
            throw 7.5;
    }

    catch (double f)
    {
        cout << "\nCaught a -ve value: " << f;
    }
    catch (char c)
    {
        cout << "\nCaught a +ve value: " << c;
    }
    catch (int i)
    {
        cout << "\nCaught a zero value: " << i;
    }
}
int main(void)
{
    f1(10);
    f1(0);
    f1(-10);
    return 0;
}