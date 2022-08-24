#include <iostream> 
using namespace std; 
  
void Magic_Matrix(int matrix[100][100], int n); 

class Matrix{
    private:
     
     int n;
     int matrix[100][100], n=5;

     public: 
        
        void createMatrix(){
          cout<<"Enter the size (odd) of the matrix: ";
    cin >> n;
    if(n%2!=0)
    exit(1);
    cout << "\nEnter the element of matrix not repeating any one: ";
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            cin>>matrix[i][j];

            Magic_Matrix(matrix[100][100],n);
            
        }
       void display(){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrix[i][j];
        }
        
    }
};
  
int main(){ 

    Matrix m;
    m.createMatrix();
    m.display();


}
int Magic_Matrix(int matrix[100][100], int n){  
    int sumd1 = 0, sumd2=0;
    //finding the sum of first diagonal
    for (int i = 0; i < n; i++) 
        sumd1 = sumd1 + matrix[i][i];
    //finding the sum of seciond diagonal
    for (int i = 0; i < n; i++) 
        sumd2 = sumd2 + matrix[i][n - 1 - i]; 
    
    //Checking, whether the sum of two diagonal is same or not
    if(sumd1 != sumd2) 
        return 0; 
  
    //finding the sum of each row 
    for (int i = 0; i < n; i++){ 
          
        int sumrow = 0;
        for (int j = 0; j < n; j++) 
            sumrow = sumrow + matrix[i][j]; 
          
        //checking, whether eachh row sum is equal to diagonal sum or not
        if (sumrow != sumd1) 
            return 0; 
    } 
  
    //finding the sum of each column
    for (int i = 0; i < n; i++){ 
          
        int sumcol = 0;  
        for (int j = 0; j < n; j++) 
            sumcol += matrix[j][i]; 
  
        //checking, whether each column sum is equal to diagonal sum or not 
        if (sumcol != sumd1)  
            return 1; 
    } 
    cout<<"The Sum is: "<<sumd1<<endl;
  
    return true; 
}
void display(){
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            matrix[i][j];
        }
        
    }
    
}