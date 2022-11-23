// PROGRAMMED BY AKSHAT JAISWAL
#include <iostream>
using namespace std;
class ABC
{
private:
    int *arr, m, n;

public:
    ABC()
    {
        cout << "Enter the number of rows of the Matrix: ";
        cin >> m;
        cout << "Enter the number of columns of the Matrix: ";
        cin >> n;
         arr = new int[m * n];
    }
    ABC(ABC &ob)
    {
        m=ob.m;
        n=ob.n;
        arr=ob.arr;
    }
    void get()
    {
        cout<<"\nEnter the elements in the matrix: ";
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> *(arr + i * n + j);
            }
        }
    }
    void display()
    {
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << *(arr + i * n + j)<<"\t";
            }
            cout<<endl;
        }
    }
};
int main(void)
{
    ABC ob1;
    ob1.get();
    cout<<"\nOriginal Matrix => "<<endl;
    ob1.display();
    ABC x1(ob1);
    cout<<"\nCopied Matrix => "<<endl;
    x1.display();
    return 0;
}

// END OF LINE