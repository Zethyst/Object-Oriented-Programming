//PROGRAMMED BY AKSHAT JAISWAL

#include <iostream>
using namespace std;
template <class T, int n>
void sort(T x[])
{
    T temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (x[i] > x[j])
            {
                temp = x[i];
                x[i] = x[j];
                x[j] = temp;
            }
        }
    }
    cout << "\nSorted Array: ";
    for (int i = 0; i < n; i++)
    {
        cout << x[i] << "  ";
    }
}
int main(void)
{
    int size;
    cout << "\nEnter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "\nEnter the elements in the array: ";
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    sort<int, 5>(arr);

    return 0;
}
//END OF LINE