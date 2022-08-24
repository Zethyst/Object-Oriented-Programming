#include <iostream>
using namespace std;

void CreateMatrix(int mat[100][100],int n){
    int i=n-1;
    int j=n/2;
   for (int k = 1; k <= n*n; k++)
   {
        mat[i][j]=k;
    if((mat[i+1][j-1])!=0 || (i==n-1 && j==0)){
    i--;
    // mat[i][j]=k;
    // i++;
    // j--;
    
    }
    else{
        i++;
        j--;
        if(i==n)
        i=0;
        if(j==-1)
        j=n-1;
    }
   
   }
   
}
  void display(int mat[100][100],int n){
    cout<<"\nTHE MATRIX\n";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<mat[i][j]<<"\t";
        }
        cout<<endl;
    }
}
void Magic_Matrix(int matrix[100][100], int n){  
    int sumd1 = 0, sumd2=0;
    for (int i = 0; i < n; i++) 
        sumd1 = sumd1 + matrix[i][i];
    for (int i = 0; i < n; i++) 
        sumd2 = sumd2 + matrix[i][n-1-i]; 
    if(sumd1 != sumd2) 
        cout<<"Sum of diagonals aren't same!"<<endl<<"Not A Magic Matrix"<<endl;
  
    for (int i = 0; i < n; i++){ 
        int sumrow = 0;
        for (int j = 0; j < n; j++) 
            sumrow = sumrow + matrix[i][j]; 
        
        if (sumrow != sumd1) 
            cout<<"Sum of row and diagonal aren't same!"<<endl<<"Not A Magic Matrix"<<endl;
    } 
  
    for (int i = 0; i < n; i++){ 
        
        int sumcol = 0;  
        for (int j = 0; j < n; j++) 
            sumcol += matrix[j][i]; 
  
        if (sumcol != sumd1)  
            cout<<"Sum of column and diagonal aren't same!"<<endl<<"Not A Magic Matrix"<<endl;
    } 

    cout<<"\nThe Sum is: "<<sumd1<<endl;
}
int main (void){
    int mat[100][100],n;
    cout<<"Enter the size of square matrix: "<<endl;
    cin>>n;
   
    CreateMatrix(mat,n);
    display(mat,n);
    Magic_Matrix(mat,n);
return 0;
}