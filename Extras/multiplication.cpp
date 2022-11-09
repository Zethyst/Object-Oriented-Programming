#include <iostream>
using namespace std;
int main (void)
{
 int x,y,i,z=0;
 cout<<"Enter two numbers: "<<endl;
 cin>>x>>y;
    for (i = 0; i < y; i++)
    {
    z=z+x;
    }
 cout<<"The multiplication of a & b: "<<z;
 
return 0;
}