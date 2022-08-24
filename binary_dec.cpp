#include <iostream>
#include <cmath>
using namespace std;

int DEC(long long n){
 int sum=0,c=0,rem;
    while(n!=0)
 {
    rem=n%10;
    n=n/10;
    sum+=rem*pow(2,c);
    ++c;
 }
}
int main (void){
 long long num;
 cout<<"Enter Binary Number: ";
 cin>>num;

 cout<<"The Decimal Equivalent: "<<DEC(num);
return 0;
}