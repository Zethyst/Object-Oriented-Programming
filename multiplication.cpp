#include <iostream>
using namespace std;
int main(void)
{
  int n, i;
  cout << "Enter the number you want the multiplication table of: " << endl;
  cin >> n;
  for (i = 0; i <= 10; i++)
    cout << n << "x" << i << "=" << n * i << endl;
  return 0;
}