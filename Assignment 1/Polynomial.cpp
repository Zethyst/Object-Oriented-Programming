#include <iostream>
using namespace std;
class Addition
{
private:
    int arr1[100], arr2[100], sum[100];
    int m, n;
public:
    void get()
    {
        cout<<"Enter the size of 1st array: ";
        cin>>m;
        cout<<"Enter the size of 2nd array: ";
        cin>>n;
        cout<<"\nEnter the elements in the 1st array: ";
        for (int i = 0; i < m; i++)
            cin>>arr1[i];
        cout<<"\nEnter the elements in the 2nd array: ";
        for (int i = 0; i < n; i++)
            cin>>arr2[i];
    }
    void print()
    {
        cout<<"\n";
        cout<<"The Polynomial: ";
        int size = sizeof(sum) / sizeof(sum[0]);
        for (int i = m - 1; i >= 0; i--)
        {
            cout<<" +"<<sum[i]<<"x^"<<i<<"\t";
        }
    }
    void compute()
    {
        if (m > n)
        {
            for (int i = 0; i < m; i++)
                sum[i] = arr1[i];
        }
        else
        {
            for (int i = 0; i < n; i++)
                sum[i] = arr2[i];
        }
        if (m > n)
        {
            for (int i = 0; i < n; i++)
                sum[i] += arr2[i];

            cout<<"\nThe sum of each elements: ";
            for (int i = 0; i < m; i++)
                cout<<sum[i]<<" ";
        }

        else
        {
            for (int i = 0; i < m; i++)
                sum[i] += arr1[i];

            cout<<"\nThe sum of each elements: ";
            for (int i = 0; i < n; i++)
                cout<<sum[i]<<" ";
        }
    }
};
class Multiplication
{
private:
    int arr1[100], arr2[100], mul[100];
    int m, n;

public:
    void get()
    {
        cout<<"Enter the size of 1st array: ";
        cin>>m;
        cout<<"Enter the size of 2nd array: ";
        cin>>n;
        cout<<"\nEnter the elements in the 1st array: ";
        for (int i = 0; i < m; i++)
            cin>>arr1[i];
            print(arr1,m);
        cout<<"\nEnter the elements in the 2nd array: ";
        for (int i = 0; i < n; i++)
            cin>>arr2[i];
            print(arr2,n);
    }
    void print(int arr[100],int m){
    cout<<"\nPolinomial Form: ";
    for (int i = m - 1; i >= 0; i--)
    {
        cout<<" +"<<arr[i]<<"x^"<<i;
    }
    }
    void multi(){
        for (int i = 0; i < m + n; i++)
        mul[i] = 0;

    cout<<"\n\nProduct: ";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mul[i + j] += arr1[i] * arr2[j];
        }
    }
    for (int i = (m - 1) + (n - 1); i >= 0; i--)
    {
        if (mul[i] != 0)
             cout<<" +"<<mul[i]<<"x^"<<i;
    }
    }
};
int main(void)
{
    Addition a1;
    Multiplication b1;
    a1.get();
    a1.compute();
    a1.print();
    cout<<"\nNow Multiplication"<<endl;
    b1.get();
    b1.multi();
    return 0;
}