#include <iostream>
using namespace std;
void f1(int p, int q)
{
    cout << "\nCall by value";
}
void f1(int &p, int &q)
{
    cout << "\nCall by reference";
}
int main(void)
{
    int x, y;
    cin >> x >> y;
    f1(x, y);
    return 0;
}