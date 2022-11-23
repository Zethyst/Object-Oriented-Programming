// PROGRAMMED BY AKSHAT JAISWAL
#include <iostream>
using namespace std;
class ABC
{
private:
    int e=0, o=0;

public:
    ABC()
    {
        e = o = 0;
    }
    ABC(int x[], int n)
    {
        cout << "\nEnter the elements in the array: ";
        for (int i = 0; i < n; i++)
        {
            cin >> x[i];
        }
    }
    ABC(ABC &ob)
    {
        e = ob.e;
        o = ob.o;
    }
};
int main(void)
{
    int n;
    cout << "\nEnter the Size of the Array: ";
    cin >> n;
    int arr[n];
    ABC a1(arr, n);
    ABC a2(a1);
    return 0;
}
// END OF LINE