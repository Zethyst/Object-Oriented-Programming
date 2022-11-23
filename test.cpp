#include <iostream>
using namespace std;


class x
{
int p;
public:
void friend operator >>(istream &i1,x &x11) { i1>>x11.p; }
void display() {
cout<<p<<"\n"; }
void operator =(x x11)
{
cout<<"hello"<<"\n";
}
};
int main()
{
x x1,x2;
cin>>x1;
x2=x1;
x1.display();
x2.display();
return 0;
}
