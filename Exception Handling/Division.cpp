#include <iostream>
using namespace std;
int main(void)
{
    double x, y;
    cout << "\nEnter two values: ";
    cin >> x >> y;
    try
    {
        if(y==0)
        throw y;
        else
        cout<<"\nDivision: "<<(x/y);
    }
    catch(int p)
    {
        cout<<"\nCaught an exception!\nResult is Undefined.";
    }
    return 0;
}