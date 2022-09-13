#include <iostream>
#include <cmath>
using namespace std;
class Triangle
{
public:
    float s;
    int a, b, c;

public:
    void Area(int a, int b, int c)
    {
        int s = (a + b + c) / 2;
        double result = sqrt(s * (s - a) * (s - b) * (s - c));
        cout << "\nThe Area of Scalene Triangle: " << result<<endl;
    }
    void Area(int a, int b)
    {
        float result = (sqrt(((a * a) - (b * b)) / 4) * b)/2;
        cout << "\nThe Area of Isosceles Triangle: " << result<<endl;
    }
    void Area(int a)
    {
        double result = (sqrt(3) / 4) * a * a;
        cout << "\nThe Area of Equilateral Triangle: " << result<<endl;
    }
};
int main(void)
{
    Triangle ob;
    int ch;
    while(1) {
    cout << "\nMENU:\nPress 1 for the Area of Scalene Triangle\nPress 2 for the Area of Isosceles Triangle\nPress 3 for the Area of Equilateral Triangle\nPress 4 to Exit\nEnter your choice: ";
    cin >> ch;
    switch (ch)
    {
    case 1:
        cout<<"\nEnter the Length of side 1: ";
        cin>>ob.a;
        cout<<"Enter the Length of side 2: ";
        cin>>ob.b;
        cout<<"Enter the Length of side 3: ";
        cin>>ob.c;
        ob.Area(ob.a,ob.b,ob.c);
        break;
    case 2:
        cout<<"\nEnter the Length of side 1: ";
        cin>>ob.a;
        cout<<"Enter the Length of side 2: ";
        cin>>ob.b;
        ob.Area(ob.a,ob.b);
        break;
    case 3:
        cout<<"\nEnter the Length of side: ";
        cin>>ob.a;
        ob.Area(ob.a);
        break;
    case 4:
    exit(0);

    default:
    cout<<"\nWrong Choice! See the menu again you blind eye\n";
        break;
    }
    }
    return 0;

}