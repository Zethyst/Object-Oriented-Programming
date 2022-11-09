#include <iostream>
using namespace std;
template <class T>
class Pair
{
private:
    T x, y;

public:
    Pair(T a, T b)
    {
        x = a;
        y = b;
    }
    void get_max()
    {
        if (x > y)
            cout << "\nThe Greatest between them is " << x;
        else
            cout << "\nThe Greatest between them is " << y;
    }
};
int main(void)
{
    Pair<int> ob(4,5);
    ob.get_max();
    return 0;
}