#include <iostream>
using namespace std;
void SUB(int a,int b)
{
    try
    {
        if(a<=0)
        throw a;
        else
        cout<<"\nSubtraction is: "<<a-b;
    }
    catch(int k)
    {
        cout<<"\nCaught an exception: "<<k;
        throw;
    }
    
}
int main(void)
{
    try
    {
        SUB(0, 5);
        SUB(10, 3);
    }
    catch (int p)
    {
        cout << "\nException is rethrown" << endl;
    }

    return 0;
}