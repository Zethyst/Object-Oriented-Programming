#include <iostream>
using namespace std;
template <class T>
class STACK
{
private:
    T arr[5], TOP = -1;

public:
    STACK()
    {
        for (int i = 0; i < 5; i++)
        {
            arr[i] = 0;
        }
    }
    void PUSH(int val)
    {
        if (TOP < 4)
            arr[++TOP] = val;
        else
            cout << "\nStack Overflow!\n";
    }
    void POP()
    {
        if (TOP == -1)
            cout << "\nStack Underflow!\n";
        else
        {
            cout << "\nPopped Element is " << arr[TOP];
            TOP--;
        }
    }
    void display()
    {
        for (int i = 0; i <= TOP; i++)
        {
            cout << arr[i] << "  ";
        }
    }
};
int main(void)
{
    STACK<int> ob;
    ob.PUSH(1);
    ob.PUSH(4);
    ob.PUSH(3);
    ob.PUSH(7);
    ob.PUSH(9);
    ob.PUSH(8);
    ob.display();
    ob.POP();
    cout << "\nAfter Popping one element: ";
    ob.display();
    return 0;
}