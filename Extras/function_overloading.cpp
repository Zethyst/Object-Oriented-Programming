#include <iostream>
using namespace std;
void f1(){
    cout<<"No arg Function\n";
}
void f1(int x){
    cout<<"One arg Function\n";
}
void f1(float x,float y){
    cout<<x+y;
    cout<<"\nProgram reached here again";
}
void f1(int x,int y){
    cout<<x+y;
    cout<<"\nProgram reached here";
}
int main (void){
 int x,y; float a,b;
//  cout<<"Enter two numbers: ";
//  cin>>x>>y;
//  f1(5);
//  f1(x+y);
//  f1(5.5,6.7);
f1('b','c');
return 0;
}