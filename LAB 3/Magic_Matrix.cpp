#include <iostream>
using namespace std;
class Matrix{
    private: 
    int mat[100][100],i,j;
    public:

void CreateMagicMatrix(int n=5){
    int i=n-1;
    int j=n/2;
   for (int k = 1; k <= n*n; k++)
   {
        mat[i][j]=k;
    if((mat[i+1][j-1])!=0 || (i==n-1 && j==0)){
    i--;
    
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
  void displayMatrix(int n=5){
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
void Magic_Matrix(int n=5){  
    int sumd1 = 0, sumd2=0;
    for (int i = 0; i < n; i++) 
        sumd1 = sumd1 + mat[i][i];
    for (int i = 0; i < n; i++) 
        sumd2 = sumd2 + mat[i][n-1-i]; 
    if(sumd1 != sumd2) 
        cout<<"Sum of diagonals aren't same!"<<endl<<"Not A Magic Matrix"<<endl;
  
    for (int i = 0; i < n; i++){ 
        int sumrow = 0;
        for (int j = 0; j < n; j++) 
            sumrow = sumrow + mat[i][j]; 
        
        if (sumrow != sumd1) 
            cout<<"Sum of row and diagonal aren't same!"<<endl<<"Not A Magic Matrix"<<endl;
    } 
  
    for (int i = 0; i < n; i++){ 
        
        int sumcol = 0;  
        for (int j = 0; j < n; j++) 
            sumcol += mat[j][i]; 
  
        if (sumcol != sumd1)  
            cout<<"Sum of column and diagonal aren't same!"<<endl<<"Not A Magic Matrix"<<endl;
    } 

    cout<<"\nThe Sum is: "<<sumd1<<endl;
}
};
int main (void){
    Matrix ob;
    ob.CreateMagicMatrix();
    ob.displayMatrix();
    ob.Magic_Matrix();
return 0;
}