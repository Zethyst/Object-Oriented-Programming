#include <iostream>
using namespace std;
    void swap_Arr(int &a,int &b){
        int temp=a;
        a=b;
        b=temp;
    }
int main (void){
    int num,arr[10];
    cout<<"Enter the number of elements: ";
    cin>>num;
    cout<<"Enter the elements in the array: ";
    for ( int i = 0; i < num; i++)
    {
        cin>>arr[i];
    }
    cout<<"Original Array: ";
    for (int i = 0; i < num; i++)
    {
        cout<<arr[i]<<" ";
    }
    

    int max=arr[0];
    int min=arr[0];
    int maxpos,minpos;
    for (int i = 0; i < num; i++)
    {
        if(arr[i]>max){
        max=arr[i];
        maxpos=i;
        }
        if(arr[i]<min){
        min=arr[i];
        minpos=i;
        }
    }
    cout<<endl;
    cout<<"Largest Element is "<<max<<endl;
    cout<<"Smallest Element is "<<min<<endl;


    swap_Arr(max,min);
    arr[maxpos]=max;
    arr[minpos]=min;

    cout<<"New Array: ";
    for (int i = 0; i < num; i++)
    {
        cout<<arr[i]<<" ";
    }
    
return 0;
}