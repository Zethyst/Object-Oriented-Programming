#include <iostream>
using namespace std;
int Sum(int a=10,int b=20,int c=30,int d=40,int e=50)
{
  int add=0;
  cout<<endl;
  add=a+b+c+d+e;
  
  cout<<"The Summation => "<<add<<endl;
}
double Sum(double a=1.4,double b=2.7,double c=3.1,double d=4.5,double e=5.6)
{
  double add=0;
  cout<<endl;
  add=a+b+c+d+e;
  
  cout<<"The Summation => "<<add<<endl;
}

int main (void)
{
  int arr[5];
  double arr2[5];
  cout<<"Enter 5 integer elements in the array:  ";
  for (int i = 0; i < 5; i++)
  {
    cin>>arr[i];
  }
  cout<<"Enter 5 double elements in the array:  ";
  for (int i = 0; i < 5; i++)
  {
    cin>>arr2[i];
  }
  
  Sum(arr[0]);
  Sum(arr[0],arr[1]);
  Sum(arr[0],arr[1],arr[2]);
  Sum(arr[0],arr[1],arr[2],arr[3]);
  Sum(arr[0],arr[1],arr[2],arr[3],arr[4]);
  Sum(arr2[0]);
  Sum(arr2[0],arr2[1]);
  Sum(arr2[0],arr2[1],arr2[2]);
  Sum(arr2[0],arr2[1],arr2[2],arr2[3]);
  Sum(arr2[0],arr2[1],arr2[2],arr2[3],arr2[4]);

return 0;
}