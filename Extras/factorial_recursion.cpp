#include <iostream>
using namespace std;
int fact(int n){
    if(n==0 || n==1)
    return 1;
    else 
    return (n*fact(n-1));
}
int main (void){
 int num;
 cout<<"Enter a number: ";
 cin>>num;
 cout<<"The factorial: "<<fact(num);
return 0;
}