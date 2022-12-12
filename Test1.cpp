// PROGRAMMED BY AKSHAT JAISWAL
#include <iostream>
using namespace std;
class Kilometer
{
private:
    int km, m;

public:
    Kilometer operator+(Kilometer ob2)
    {
        Kilometer t;
        t.km = km + ob2.km;
        t.m = m + ob2.m;
        return (t);
    }
    friend void operator>>(istream &, Kilometer &);
    friend void operator<<(ostream &, Kilometer &);
};
void operator>>(istream &in, Kilometer &ob)
{
    cout << "\nEnter the value of Kilometer and meter: ";
    in >> ob.km;
    in >> ob.m;
}
void operator<<(ostream &out, Kilometer &ob)
{
    cout << "\nKilometer: ";
    out << ob.km;
    cout << "\nMeter: ";
    out << ob.m;
}
int main(void)
{
    Kilometer k1, k2;
    cin >> k1;
    cin >> k2;
    cout << k1;
    cout << k2;
    Kilometer result;
    result = k1 + k2;
    cout << result;
    return 0;
}
// END OF LINE