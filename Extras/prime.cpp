#include <iostream>
using namespace std;

void Prime(int m,int n){
    int count=0;
    for (int i = m; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if(i%j==0)
            count++;
        }
        if(count==2)
        cout<<i<<"\t";
        count=0;
    }
    
}
int main (void){
    int m,n;
    cout<<"Enter the lower range: ";
    cin>>m;
    cout<<"Enter the upper range: ";
    cin>>n;
    cout<<"All the prime numbers in this range: ";
    Prime(m,n);
 
return 0;
}