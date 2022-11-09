#include <iostream>
using namespace std;
class DB;   //Forward Declaration
class DM
{
private:
    float meter, centimeter;

public:
    void get()
    {
        cout << "Enter the values: ";
        cout << "Meter: ";
        cin >> meter;
        cout << "Centimeter: ";
        cin >> centimeter;
    }
    friend void DM2DB(DM, DB);
    friend void DB2DM(DM, DB);
};
class DB
{
private:
    float feet, inches;

public:
    void get()
    {
        cout << "Enter the values: ";
        cout << "Feet: ";
        cin >> feet;
        cout << "Inches: ";
        cin >> inches;
    }
    friend void DM2DB(DM, DB);
    friend void DB2DM(DM, DB);
};
void DM2DB(DM a, DB b)
{
    float r_feet, r_inches;
    a.meter = a.meter * 3.28084;
    a.centimeter = a.centimeter * 0.393701;
    r_feet = a.meter + b.feet;
    r_inches = a.centimeter + b.inches;
    if (r_inches > 12)
    {
        r_inches -= 12;
        r_feet++;
    }
    cout << "\nThe Addition in Feet-Inch System -> ";
    cout << "\nFeet: " << r_feet;
    cout << "\nInches: " << r_inches;
}
void DB2DM(DM a, DB b)
{
    float r_meter, r_centimeter;
    b.feet = b.feet * 0.3048;
    b.inches = b.inches * 2.54;
    r_meter = a.meter + b.feet;
    r_centimeter = a.centimeter + b.inches;
    if (r_centimeter > 100)
    {
        r_centimeter -= 100;
        r_meter++;
    }
    cout << "\nThe Addition in Meter-Centimeter System -> ";
    cout << "\nMeters: " << r_meter;
    cout << "\nCentimeters: " << r_centimeter;
}
int main(void)
{
    int ch;
    DM x;
    DB y;
    x.get();
    y.get();
    cout << "\n\n-------MENU------";
    cout << "\n1. Add in Feet-Inches System";
    cout << "\n2. Add in Meter-Centimeter System";
    cout << "\nEnter your choice: ";
    cin >> ch;
    switch (ch)
    {
    case 1:
        DM2DB(x, y);
        break;
    case 2:
        DB2DM(x, y);
        break;
    default:
        cout << "\nWrong Choice! ";
    }
    return 0;
}