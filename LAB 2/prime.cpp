#include <iostream>
using namespace std;
int main (void)
{
  int num,i,count=0;
  cout<<"Enter a number: "<<endl;
  cin>>num;
  for ( i = 1; i <= num; i++)
  {
    if(num==1 | num ==0){
    // cout<<"This is a special case!"<<endl;
    goto special;
    }
    if(num%i==0)
    count++;
  }
  if(count==2)
  cout<<"Number is a prime number!"<<endl;
  else
  cout<<"Number is not a prime number!"<<endl;

return 0;

  special:
  cout<<"This is a special case!";
}