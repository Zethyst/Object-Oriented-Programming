#include <iostream>
#define n 5
using namespace std;

template <class T>
void search(T x[], T key)
{
    int flag = 0;
    for (int i = 0; i < n; i++)
    {
        if (x[i] == key)
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
    int arr[n], ch, key1;
    double arr2[n],key2;
    char arr3[n],key3;
    cout << "What type of elements you want in your array?" << endl;
    cout << "1. Integer" << endl;
    cout << "2. Double" << endl;
    cout << "3. Character" << endl;
    cout << "Enter your choice: ";
    cin >> ch;
    if (ch == 1)
    {
        cout << "\nEnter 5 elements in the array: ";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        cout << "\nEnter the value you want to search: ";
        cin >> key1;
        search(arr, key1);
    }
    if (ch == 2)
    {
        cout << "\nEnter 5 elements in the array: ";
        for (int i = 0; i < n; i++)
        {
            cin >> arr2[i];
        }
        cout << "\nEnter the value you want to search: ";
        cin >> key2;
        search(arr2, key2);
    }
    if (ch == 3)
    {
        cout << "\nEnter 5 elements in the array: ";
        for (int i = 0; i < n; i++)
        {
            cin >> arr3[i];
        }
        cout << "\nEnter the value you want to search: ";
        cin >> key3;
        search(arr3, key3);
    }

    return 0;
}