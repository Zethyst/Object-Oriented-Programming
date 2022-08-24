#include <iostream>
using namespace std;
int main (void){
    int m,n;
    cout<<"Enter the number of rows of the Matrix: ";
    cin>>m;
    cout<<"Enter the number of columns of the Matrix: ";
    cin>>n;
    int *arr = new int [m*n];

    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>*(arr+i*n+j);
        }
    }
    cout<<"\nTHE MATRIX\n";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<*(arr+i*n+j)<<"\t";
        }
        cout<<endl;
    }
return 0;
}