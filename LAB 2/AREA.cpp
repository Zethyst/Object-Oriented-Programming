#include <iostream>
using namespace std;
float AREA_VOL(int r)
{
    float ar = 3.14 * r * r;
    return ar;
}
float AREA_VOL(float r)
{
    float ar = 3.14 * r * r * r;
    return ar;
}
int main(void)
{
    int r;
    int num=0;
    cout << "1 - Area of circle \n2. - Volume of Sphere" << endl;
    cout<<"Enter the Shape:\n";
    cin>>num;
    cout << "Enter the Radius:" << endl;
    cin >> r;
    if (num==1)
    {
    float a1=AREA_VOL(r);
    cout << "The Area => "<<a1<<endl;
    }
    else
    {
    cout << "The Area =>" <<AREA_VOL(r)<< endl;

    }
return 0;
}
