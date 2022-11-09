#include <iostream>
#define n 5
using namespace std;

template <class T>
class XYZ
{
private:
    T x[n], val;

public:
    void get()
    {
        for (int i = 0; i < n; i++)
        {
            cin >> x[i];
        }
    }
    void search()
    {
        int flag=0;
        cout<<"\nEnter the value you want to search: ";
        cin>>val;
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
};
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
        XYZ <int>x1;
        x1.get();
        x1.search();
    }
    if (ch == 2)
    {
         XYZ <float>x1;
        x1.get();
        x1.search();
    }
    if (ch == 3)
    {
        XYZ <char>x1;
        x1.get();
        x1.search();
    }

    return 0;
}