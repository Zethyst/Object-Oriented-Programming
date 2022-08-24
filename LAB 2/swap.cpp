#include <iostream>
using namespace std;

void func1(int a, int b)
{
  int temp=a;
  a=b;
  b=temp;
}
void func2(int &a, int &b)
{
  int temp=a;
  a=b;
  b=temp;
}
void func3(int *a, int *b)
{
  int temp=*a;
  *a=*b;
  *b=temp;
}
int main (void)
{
  int a,b;
  cout<<"Enter two numbers: "<<endl;
  cin>>a>>b;
  cout<<"The two numbers are "<<a<<" and "<<b<<endl;
  func1(a,b);
  cout<<"The two numbers value after call by value  => "<<a<<" and "<<b<<endl;
  func2(a,b);
  cout<<"The two numbers value after call by reference => "<<a<<" and "<<b<<endl;
  func3(&a,&b);
  cout<<"The two numbers value after call by address => "<<a<<" and "<<b<<endl;
return 0;
}
