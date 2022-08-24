#include <iostream>
using namespace std;
int main (void){
    int n,arr[100];
    cout<<"Enter the size of array: ";
    cin>>n;
    cout<<"Enter the elements in the array: ";
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (int i = 0; i < n; i++)
   {
    for (int j = i+1; j < n; j++)
    {
        if(arr[j]<arr[i])
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
    
}
cout<<"After sorting: ";
for (int i = 0; i < n; i++)
{
    cout<<arr[i];
}

return 0;
}