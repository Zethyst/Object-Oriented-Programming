#include <iostream>
using namespace std;
int main (void){
 int a;
 try
 {
    cout<<"\nEnter a value: ";
    cin>>a;
    if (a>0)
    {
        throw 9.5;
    }
    else if (a<0)
    {
        throw 'A';
    }
    else
    throw 10;
    
    
 }
 catch(int k)
 {
    cout<<"\nCaught an integer "<<k;
 }
 catch(...)
 {
    cout<<"\nCaught an element"<<endl;
 }
 
return 0;
}