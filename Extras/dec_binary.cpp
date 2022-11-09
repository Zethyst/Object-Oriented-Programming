#include <iostream>
using namespace std;
long long BIN(int n){
    int rem,i=1,binary=0;
    while(n!=0){
    rem=n%2;
    n=n/2;
    binary+=rem*i;
    i*=10;
    }
    return binary;
}
int main (void){
    int num,rem;
    cout<<"Enter Decimal Number: ";
    cin>>num;
    cout<<"The Binary Equivalent: "<<BIN(num);
 
return 0;
}