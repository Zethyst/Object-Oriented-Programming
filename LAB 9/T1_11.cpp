//PROGRAMMED BY AKSHAT JAISWAL

#include <iostream>
#define n 5
int TOP = -1;
using namespace std;
template <class S, class R, class N>
class STACK
{
private:
    S name[n];
    R roll_ID[n];
    N number[n];

public:
    void PUSH(S name, R ID, N no)
    {
        if (TOP < 4)
        {
            TOP++;
            this->name[TOP] = name;
            this->roll_ID[TOP] = ID;
            this->number[TOP] = no;
        }
        else
            cout << "\nStack Overflow!\n";
    }
    void POP()
    {
        if (TOP == -1)
            cout << "\nStack Underflow!\n";
        else
        {
            cout << "\nPopped Values are => " << endl;
            cout << name[TOP] << endl;
            cout << roll_ID[TOP] << endl;
            cout << number[TOP] << endl;
            TOP--;
        }
    }
    void display()
    {
        for (int i = 0; i <= TOP; i++)
        {
            cout << "\n\nName: " << name[i];
            cout << "\nID: " << roll_ID[i];
            cout << "\nCGPA/Salary: " << number[i];
        }
    }
};
int main(void)
{
    STACK<string, int, double> ob;
    int ch;
    char ch2;
    string name;
    int ID;
    double Number;
    while (1)
    {
        cout << "\n\n1. Push Data into the STACK" << endl;
        cout << "2. Pop Data from the STACK" << endl;
        cout << "3. Display the contents of the STACK" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter choice: ";
        cin >> ch;
        if (ch == 1)
        {
            cout << "\nStudent/Employee?\n(S/E): ";
            cin >> ch2;
            if (ch2 == 'S' || ch2 == 's')
            {
                cout << "\nEnter Student Name: ";
                cin >> name;
                cout << "\nEnter Student Roll No: ";
                cin >> ID;
                cout << "\nEnter Student CGPA: ";
                cin >> Number;
                try
                {
                    if (Number > 10)
                        throw Number;
                }
                catch (double Number)
                {
                    cout << "\nCaught an Exception!\nInvalid CGPA => " << Number;
                }
            }
            if (ch2 == 'E' || ch2 == 'e')
            {
                cout << "\nEnter Employee Name: ";
                cin >> name;
                cout << "\nEnter Employee ID: ";
                cin >> ID;
                cout << "\nEnter Employee Salary: ";
                cin >> Number;
            }
            ob.PUSH(name, ID, Number);
        }
        if (ch == 2)
        {
            ob.POP();
        }
        if (ch == 3)
        {
            ob.display();
        }
        if (ch == 4)
        {
            exit(0);
        }
    }

    return 0;
}
//END OF LINE