#include <iostream>
using namespace std;
int main (void)
{
  int l,b;
  cout<<"Enter the length and breath of the rectangle: "<<endl;
  cin>>l>>b;
  float area=l*b;
  float perimeter= 2*(l+b);
  if(area>perimeter)
  cout<<"Area is greater than perimeter\n"<<"Area: "<<area<<endl;
  else
  cout<<"Perimeter is greater than area\n"<<"Perimeter: "<<perimeter<<endl;
  return 0;
}