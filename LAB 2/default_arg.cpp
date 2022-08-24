#include <iostream>
using namespace std;
void Sum(int x=5,int y=10,int z=20)
{
  cout<<endl;
  cout<<"The numbers are "<<x<<" "<<y<<" "<<z<<endl;
  cout<<"The Summation => "<<x+y+z<<endl;
}

int main (void)
{
  int a,b,c;
  cout<<"Enter three numbers: "<<endl;
  cin>>a>>b>>c;
  cout<<"The numbers entered are: "<<a<<" "<<b<<" "<<c<<endl;
  Sum();
  Sum(a);
  Sum(a,b);
  Sum(a,b,c);
return 0;
}