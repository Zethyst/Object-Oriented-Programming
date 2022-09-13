#include <iostream>
#include <cmath>
using namespace std;
class Perimeter
{
public:
    int a, b, c, r;

public:
    void Peri_Peri(int a, int b, int c)
    {
        int s = (a + b + c);
        cout << "\nThe Perimeter of Triangle: " << s << endl;
    }
    void Peri_Peri(int a, int b)
    {
        int result = 2 * (a + b);
        cout << "\nThe Perimeter of Rectangle: " << result << endl;
    }
    void Peri_Peri(int a)
    {
        double result = 2 * 3.14 * a;
        cout << "\nThe Perimeter of Circle: " << result << endl;
    }
};
int main(void)
{
    Perimeter ob;
    int ch;
    while (1)
    {
        cout << "\nMENU:\nPress 1 for the Perimeter of Circle\nPress 2 for the Perimeter of Rectangle\nPress 3 for the Perimeter of Triangle\nPress 4 to Exit\nEnter your choice: ";
        cin >> ch;
        switch (ch)
        {
        case 1:
            cout << "\nEnter the radius of circle: ";
            cin >> ob.a;
            ob.Peri_Peri(ob.a);
            break;
        case 2:
            cout << "\nEnter the Length: ";
            cin >> ob.a;
            cout << "Enter the Breadth: ";
            cin >> ob.b;
            ob.Peri_Peri(ob.a, ob.b);
            break;
        case 3:
            cout << "\nEnter the Length of side 1: ";
            cin >> ob.a;
            cout << "Enter the Length of side 2: ";
            cin >> ob.b;
            cout << "Enter the Length of side 3: ";
            cin >> ob.c;
            ob.Peri_Peri(ob.a, ob.b, ob.c);
            break;
        case 4:
            exit(0);

        default:
            cout << "\nWrong Choice! See the menu again you blind eye\n";
            break;
        }
    }
    return 0;
}