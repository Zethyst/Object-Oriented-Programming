//PROGRAMMED BY AKSHAT JAISWAL

#include <iostream>
#define n 5
using namespace std;

template <class T>
void swap(T x, T y)
{
    T temp;
    temp = x;
    x = y;
    y = temp;
    cout << "\nx: " << x << "\ny: " << y;
}
int main(void)
{
    int ch;
    cout << "What type of elements you want in your array?" << endl;
    cout << "1. Integer" << endl;
    cout << "2. Float" << endl;
    cout << "3. Character" << endl;
    cout << "Enter your choice: ";
    cin >> ch;
    if (ch == 1)
    {
        swap(3, 4);
    }
    if (ch == 2)
    {
        swap(4.6, 7.7);
    }
    if (ch == 3)
    {
        swap('A', 'H');
    }

    return 0;
}
//END OF LINE9