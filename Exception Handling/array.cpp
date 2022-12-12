#include <iostream>
using namespace std;
void get(int a[])
{
    try
    {
        int in, count = 0;
        cout << "\nEnter values in the array: \n";
        for (int i = 0; count != 5; i++)
        {
            cin >> in;
            if (in == 0)
            {
                throw i;
            }
            else
                a[i] = in;
            count++;
        }
    }
    catch (int k)
    {
        // cout<<"\nCaught an Exception: "<<k;
        throw;
    }
}
void display(int x[])
{
    for (int i = 0; i < 5; i++)
    {
        cout << x[i] << "  ";
    }
}

int main(void)
{
    int arr[5];
    try
    {
        get(arr);
    }
    catch (int index)
    {
        cout << "\nCaught an Exception.\nEnter value(s) again: ";
        for (int i = index; i < 5; i++)
        {
            cin >> arr[i];
        }
    }
    display(arr);
    return 0;
}