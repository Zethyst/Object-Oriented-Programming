#include <iostream>
using namespace std;
int main (void)
{
  int i,n,f=1;
  cout<<"Enter a number: ";
  cin>>n;
  for ( i = n; i >0; i--)
  {
    f=f*i;
  }
  cout<<"Factorial of "<<n<<" is "<<f;
  
  return 0;
}