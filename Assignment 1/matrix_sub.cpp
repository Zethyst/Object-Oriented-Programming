#include <iostream>
using namespace std;
int main(void)
{
    int *mat1,*mat2, m,n;
    cout << "Enter the size of the matrix 1: ";
    cin >> m;
    mat1 = new int[m * m];

       cout << "\nEnter the elements in the matrix: ";
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> *(mat1+i*m+j);
            }
        }
    cout << "Enter the size of the matrix 2: ";
    cin >> n;
    mat2 = new int[n * n];

       cout << "\nEnter the elements in the matrix: ";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> *(mat2+i*n+j);
            }
        }
            cout << "\nTHE MATRIX 1: \n";
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cout << *(mat1+i*m+j)<<"\t";
            }
            cout << "\n";
        }        cout << "\nTHE MATRIX 2: \n";
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << *(mat2+i*n+j)<<"\t";
            }
            cout << "\n";
        }
           int *mat3 = new int[m * n];
            for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                *(mat3+i*n+j) = *(mat1+i*m+j) - *(mat2+i*n+j);
            }
        }
            cout << "\nTHE SUBTRACTION: \n";
        for (int i = 0; i < m; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << *(mat3+i*n+j)<<"\t";
            }
            cout << "\n";
        }
    return 0;
}