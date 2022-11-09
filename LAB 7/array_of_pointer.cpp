#include <iostream>
using namespace std;
class Item
{
private:
	int *num, *price;

public:
	Item()
	{
		num = new int;
		price = new int;
	}
	void get()
	{
		// cin.ignore();
		cout << "\nEnter the Number of Item: ";
		cin >> *num;
		cout << "\nEnter the Price of Item: ";
		cin >> *price;
	}
	void display()
	{
		cout << "\n\n----THE DETAILS-----";
		cout << "\nNumber of Item: " << *num;
		cout << "\nPrice of Item: " << *price;
	}
};
int main(void)
{
	int n;
	cout << "\nEnter the Number of Objects: ";
	cin >> n;
	Item *a[n];
	for (int i = 0; i < n; i++)
	{
		a[i] = new Item;
		a[i]->get();
		a[i]->display();
	}

	return 0;
}