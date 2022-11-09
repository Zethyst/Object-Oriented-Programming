#include <iostream>

using namespace std;
class Item
{
private:
	int num, price;

public:
	void get()
	{
		cout << "\nEnter the Number of Item: ";
		cin >> num;
		cout << "\nEnter the Price of Item: ";
		cin >> price;
	}
	void display()
	{
		cout << "\n----THE DETAILS-----";
		cout << "\nNumber of Item: " << num;
		cout << "\nPrice of Item: " << price;
	}
};
int main(void)
{
	Item ob, *p1;
	ob.get();
	cout << "\nUSING NORMAL OBJECT:\n ";
	ob.display();
	p1 = &ob;
	p1->get();
	cout << "\nUSING POINTER TO OBJECT:\n ";
	p1->display();
	return 0;
}