#include <iostream>
using namespace std;
int main (void){
    int m,n;
    cout<<"Enter the number of rows of the Matrix: ";
    cin>>m;
    cout<<"Enter the number of columns of the Matrix: ";
    cin>>n;
int mat[100][100];
int k=1;
 int r1=0,c1=0,r2=m-1,c2=n-1;
 do{
    for (int i = c1; i <= c2; i++)
    {
        mat[r1][i]=k;
        k++;
    }
    for (int i = r1+1; i <= r2; i++)
    {
        mat[i][c2]=k;
        k++;
    }
    for (int i = c2-1; i >= c1; i--)
    {
        mat[r2][i]=k;
        k++;
    }
    for (int i = r2-1; i >= r1+1; i--)
    {
        mat[i][c1]=k;
        k++;
    }
    r1++;
    r2--;
    c1++;
    c2--;  
 }
 while(k<=m*n);
   cout<<"\nTHE SPIRAL MATRIX\n"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<mat[i][j]<<"\t";
        }
        cout<<endl;
    }
return 0;
}