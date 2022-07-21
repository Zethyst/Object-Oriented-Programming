#include <iostream>
using namespace std;
int main()
{
	int arr[] = {100, 329, 79, 128, 777};
	int n = sizeof(arr) / sizeof(arr[0]);
	int max = arr[0];
	int min = arr[0];

	for (int i = 1; i < n; i++)
  {
		if (arr[i] > max)
			max = arr[i];
    if (arr[i] < min)
      min = arr[i];
  }
	cout << "Largest in given array is "<< max<<endl;
	cout << "Smallest in given array is "<< min<<endl;

  int temp = max;
  max=min;
  min=temp;
  
  cout<<"After swapping:"<<endl;
  cout << "Largest in given array is "<< max<<endl;
	cout << "Smallest in given array is "<< min<<endl;
	return 0;
}