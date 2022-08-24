#include <iostream>
using namespace std;

void sort(int *arr,int n){
for (int i = 0; i < n; i++)
{
    for (int j = i+1; j < n; j++)
    {
        if(arr[i]>arr[j])
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    
}

}
int main (void){
    int n, *arr;
    cout<<"Enter the size of array: ";
    cin>>n;
    arr=(int*)malloc(n*sizeof(int));
    cout<<"Enter the elements in the array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>*(arr+i);
    }
        sort(arr,n);
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; i < n; i++)
        {
            if(arr[i]==arr[j])
            {
                arr[j]=arr[j+1];
            }

        }
                    
        
    }

    for (int i = 0; i < n; i++)
    {
        cout<<arr[i];
    }
    
    // for (int i = 0; i < n; i++)
    // {
    //     if((arr[i-1]!=arr[i])&&(arr[i+1]!=arr[i]))
    //     cout<<arr[i];
    // }
    
    
 
return 0;
}