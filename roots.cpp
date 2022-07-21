#include <iostream>
#include <cmath>
using namespace std;
int main (void)
{
  int a,b,c,d;
float r1,r2;
cout<<"Enter the coefficients: ";
cin>> a >> b >> c;
d = (b*b)-(4*a*c);
if (d==0)
{
cout<<"The roots are equal";
r1=r2= -b/(2.0*a);
cout<<"The roots are r1=r2="<<r1;
}
else if (d>0)
{
cout<<"The roots are real and unequal";
r1=(-b+sqrt(d))/(2.0*a);
r2=(-b-sqrt(d))/(2.0*a);
cout<<"\n The roots are given below: \n";
cout<<"r1="<<r1<<"and r2="<<r2;
}
else
{
cout<<"The roots are real and imaginery";
r1=(-b+sqrt(abs(d))/2.0*a);
r2=(-b-sqrt(abs(d))/2.0*a);
cout<<"\n The roots are given below \n";
cout<<"r1="<<r1<<"i and r2="<<r2<<"i";
}
return 0;
}