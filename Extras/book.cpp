#include <iostream>
using namespace std;
int main(void)
{
int price;
float dis;
char  book[10];
cout<<"Enter the name of the book: ";
cin>>book;
fflush(stdin);
cout<<"Enter the price of the book"<<endl;
cin>>price;
price+=10;
cout<<"The name of the book: "<<book<<endl;
cout<<"The price of the book: "<<price;
return 0;
}