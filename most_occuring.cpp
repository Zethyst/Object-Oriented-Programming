#include <iostream>
using namespace std;
int main (void){
int arr[100],n,count=0;
cout<<"Enter the no. of elements: ";
cin>>n;
for (int i = 0; i < n; i++)
    cin>>arr[i];
    cout<<"The elements are: ";
for (int i = 0; i < n; i++)
    cout<<arr[i]<<" ";
    int max_count=0;
    int max_repeated=arr[0];
    cout<<"\nNumber : Frequency"<<endl;
    for (int i = 0; i < n; i++)
    {
        count=0;
        for (int j = i+1; j < n; j++)
        {
            if(arr[i]==arr[j])
            count++;
        }
        if(count>max_count)
        {
        max_count=count;
        max_repeated=arr[i];
        }
        if(count>0)
        cout<<arr[i]<<" : "<<count+1<<endl;
    }
        cout<<endl<<"Most Occurred Element: "<<max_repeated;
    
 
return 0;
}