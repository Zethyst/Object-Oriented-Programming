#include<iostream>
using namespace std;
class X1
{public:
X1(){ cout<<"X1";} Y():X1(),X2()
};
class X2
{public:
X2(){cout<<"x2";}
};
class X3
{public:
X3(){cout<<"X3";}
class Y : public X1, virtual X2, public X3
{ public:

{ cout<<'Y'; }
};
int main()
{
Y y;
return 0; 

}