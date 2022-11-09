#include <iostream>
using namespace std;
class Area{
    int l,b,s;
    public:
    void getdata()
    {
        cout<<"Enter the length and breadth of the rectangle :"<<endl;
        cin>>l>>b;
        cout<<"Enter the side of the square :"<<endl;
        cin>>s;
    }
    friend void area(Area);    
};
void area(Area aa)
{
    cout<<"Area of the rectangle is :"<<aa.l*aa.b<<endl;
    cout<<"Area of the square is :"<<aa.s*aa.s<<endl;
}
int main (void)
{
Area bb;
bb.getdata();
area(bb);
return 0;
}