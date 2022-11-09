#include <iostream>
using namespace std;
 void f1(int &m,int &n){
    m=m+4;
    n=n+7;
 };
int main (void){
 int x,y;
 cout<<"Enter two numbers: ";
 cin>>x>>y;
 int &m=x;
 int &n=y;
 f1(m,n);
 cout<<x<<" "<<y;
return 0;
}