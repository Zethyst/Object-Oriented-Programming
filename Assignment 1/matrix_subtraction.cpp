#include <iostream>
using namespace std;
class Matrix
{
public:

    int **mat, size;

public:
    void memory(){
        cout<<"Enter the size of the matrix: ";
        cin>>size;
        mat=new int*[size];
        for (int i = 0; i < size; i++)
        {
            mat[i]=new int[size];
        }
        
    } 
    void input()
    {
        cout << "\nEnter the elements in the matrix: ";
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                cin >> mat[i][j] ;
            }
        }
    }
    void output()
    {
        cout << "\nTHE MATRIX: \n";
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                cout << mat[i][j]<< "\t";
            }
            cout << "\n";
        }
    }
    Matrix SUB(Matrix a1, Matrix b1)
    {
        Matrix t;
        // mat = new int[size * size];
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
               t.mat[i][j] = a1.mat[i][j] - b1.mat[i][j];
            }
        }
        for (int i = 0; i < size; i++)
        {
            for (int j = 0; j < size; j++)
            {
                cout << t.mat[i][j]<< "\t";
            }
            cout << "\n";
        }
        
    }
};
int main(void)
{
    Matrix m1,m2,m3;

    m1.memory();
    m1.input();
    m1.output();
    m2.memory();
    m2.input();
    m2.output();

    m3.SUB(m1,m2);
    m3.output();


        return 0;
}