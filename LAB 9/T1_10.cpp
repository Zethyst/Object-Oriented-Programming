// PROGRAMMED BY AKSHAT JAISWAL

#include <iostream>
using namespace std;
template <class T>
class STACK
{
private:
    T arr[5];
    int TOP = -1;

public:
    STACK()
    {
        for (int i = 0; i < 5; i++)
        {
            arr[i] = 0;
        }
    }
    void PUSH(T val)
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
    int menu()
    {
        int ch;
        cout << "\n---------MENU---------" << endl;
        cout << "1. Push an element into the stack" << endl;
        cout << "2. Pop an element from the stack" << endl;
        cout << "3. Display the contents of the stack" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> ch;
        return ch;
    }
};
int main(void)
{
    int ch, val1;
    char val2;
    float val3;
    cout << "What type of elements you want in your array?" << endl;
    cout << "1. Integer" << endl;
    cout << "2. Float" << endl;
    cout << "3. Character" << endl;
    cout << "Enter your choice: ";
    cin >> ch;
    if (ch == 1)
    {
        STACK<int> ob1;
        while (1)
        {
            ch = ob1.menu();
            if (ch == 1)
            {
                cout << "\nEnter an integer value: " << endl;
                cin >> val1;
                ob1.PUSH(val1);
            }
            if (ch == 2)
            {
                ob1.POP();
            }
            if (ch == 3)
            {
                ob1.display();
            }
            if (ch == 4)
            {
                exit(0);
            }
        }
    }
    if (ch == 2)
    {
        STACK<float> ob2;
        while (1)
        {
            ch = ob2.menu();
            if (ch == 1)
            {
                cout << "\nEnter a floating point value: " << endl;
                cin >> val3;
                ob2.PUSH(val3);
            }
            if (ch == 2)
            {
                ob2.POP();
            }
            if (ch == 3)
            {
                ob2.display();
            }
            if (ch == 4)
            {
                exit(0);
            }
        }
    }
    if (ch == 3)
    {
        STACK<char> ob3;
        while (1)
        {
            ch = ob3.menu();
            if (ch == 1)
            {
                cout << "\nEnter a character: " << endl;
                cin >> val2;
                ob3.PUSH(val2);
            }
            if (ch == 2)
            {
                ob3.POP();
            }
            if (ch == 3)
            {
                ob3.display();
            }
            if (ch == 4)
            {
                exit(0);
            }
        }
    }

    return 0;
}
// END OF LINE