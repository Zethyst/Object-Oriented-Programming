#include <iostream>
using namespace std;
void swap(int a,int b){
    cout<<"\nThe values before swapping: "<<a<<" and "<<b<<endl;
    int temp=a;
    a=b;
    b=temp;
    cout<<"\nThe values After swapping: "<<a<<" and "<<b<<endl;
}
int main (void){
    int n1,n2;
 printf("\nEnter two values: ");
 scanf("%d%d",&n1,&n2);
 swap(n1,n2);
 swap(5,7);
 
return 0;
}