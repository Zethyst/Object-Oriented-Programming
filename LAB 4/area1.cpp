#include <iostream>
using namespace std;
class Rectangle{
    int l,b;
    public:
    void getdata();
    void area();
    friend int farea(Rectangle);
};
void Rectangle::getdata()
{
cout<<"\nEnter length and breadth:\n"<<endl;
cin>>l>>b;
}
void Rectangle::area()
{
    cout<<"The area of the rectangle through member fucntion is :"<<l*b<<endl;
}
int farea(Rectangle aa)
{
     cout<<"Area of the rectangle through friend function is :"<<aa.l*aa.b<<endl;
     return 0;
}
int main (void)
{
Rectangle bb;
bb.getdata();
bb.area();
farea(bb);
return 0;
}