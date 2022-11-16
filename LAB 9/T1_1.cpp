//PROGRAMMED BY AKSHAT JAISWAL

#include <iostream>
#define n 5
using namespace std;

template <class T>
void get_data(T arr[])
{
    cout << "\nEnter 5 elements in the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
}
template <class T>
void min(T arr[])
{
    T m;
    m = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < m)
            m = arr[i];
    }
    cout << "\nMinimum value: " << m;
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
        get_data(arr);
        min(arr);
    }
    if (ch == 2)
    {
        get_data(arr2);
        min(arr2);
    }
    if (ch == 3)
    {
        get_data(arr3);
        min(arr3);
    }

    return 0;
}
//END OF LINE