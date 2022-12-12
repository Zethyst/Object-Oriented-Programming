// PROGRAMMED BY AKSHAT JAISWAL
#include <iostream>
using namespace std;
class Distance
{
private:
    int km, m;

public:
    Distance()
    {
        km = m = 0;
    }
    Distance(int p)
    {
        km = p / 1000;
        m = p % 1000;
    }
    operator int()
    {
        int a;
        a = km * 1000 + m;
        return a;
    }
    operator float()
    {
        float f;
        f = km + m / 1000;
        return f;
    }
    void display()
    {
        cout << "\nKm: " << km << "\nM: " << m;
    }
};
int main(void)
{
    Distance ob(1500);
    ob.display();
    int mt;
    mt = ob;
    cout << endl
         << "Distance in Meters: " << mt;
    float kt;
    kt = ob;
    cout << endl
         << "Distance in Kilometers: " << kt;

    return 0;
}
// END OF LINE