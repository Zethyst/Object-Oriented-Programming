#include <iostream>
#define n 5
using namespace std;

template <class T>
void f1(T x[])
{
    T val;
    int flag = 0;
    cout << "\nEnter the value you want to search: ";
    cin >> val;
    for (int i = 0; i < n; i++)
    {
        if (x[i] == val)
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1)
        cout << "\nSearch Successfull !!";
    else
        cout << "\nSearch NOT Successfull";
}
int main(void)
{
    int arr[n], ch;
    float arr2[n];
    char arr3[n];
    cout << "What type of elements you want in your array?" << endl;
    cout << "1. Integer" << endl;
    cout << "2. Float" << endl;
    cout << "3. Character" << endl;
    cout << "Enter your choice: ";
    cin >> ch;
    if (ch == 1)
    {
        cout << "Enter the Elements in the Array: \n";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        f1(arr);
    }
    if (ch == 2)
    {
        cout << "Enter the Elements in the Array: \n";
        for (int i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }
        f1(arr2);
    }
    if (ch == 3)
    {
        cout << "Enter the Elements in the Array: \n";
        for (int i = 0; i < n; i++)
        {
            cin >> arr3[i];
        }
        f1(arr3);
    }

    return 0;
}