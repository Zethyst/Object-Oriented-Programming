#include <iostream>
using namespace std;
class Item
{
private:
	int num,price;
public:
	Item(){
		num=1;
		price=2;
	}
	Item(int num,int price){
		this->num=num;
		this->price=price;
	}

	void display()
	{
		cout<<"\n\n----THE DETAILS-----";
		cout<<"\nNumber of Item: "<<num;
		cout<<"\nPrice of Item: "<<price;
	}
};
	int main(void)
	{
		Item ob,ob2(6,7);
        cout<<"\n\nUSING DEFAULT CONSTRUCTOR=>";
		ob.display();
        cout<<"\n\nUSING PARAMETERIZED CONSTRUCTOR=>";
		ob2.display();
	return 0;
	}