#include <iostream>
using namespace std;
int main(void)
{
    int x, y, j;
    cout << "\nEnter two values: ";
    cin >> x >> y;
    try
    {
        j=(x>y)?0:1;
        if(j==1)
        throw j;
        else
        cout<<"\nSubtraction: "<<(x-y);
    }
    catch(int p)
    {
        cout<<"\nCaught a negative value! "<<(x-y);
    }
    return 0;
}