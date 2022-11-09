#include <bits/stdc++.h>
using namespace std;

class Shopping
{
    public:
    string name[10],code[10];
    int price[10], quantity[10],Total[10],Sum=0,i;
    public: 
    int get(){
        i=1;
        char ch;
        cout<<"\nEnter the specifications of the product you wanna buy-\n";
        cout<<"Name: ";
        cin>>name[i];
        fflush(stdin);
        cout<<"Code: ";
        cin>>code[i];
        fflush(stdin);
        cout<<"Price: ";
        cin>>price[i];
        fflush(stdin);
        cout<<"Quantity: ";
        cin>>quantity[i];
        fflush(stdin);
        Total[i]=price[i]*quantity[i];
        i++;
        cout<<"\nDo you want to add another product?\n(Y/N): ";
        cin>>ch;
    while (ch=='Y' || ch=='y')
    {
        cout<<"\nEnter the specifications of the product you wanna buy-\n";
        cout<<"Name: ";
        cin>>name[i];
        fflush(stdin);
        cout<<"Code: ";
        cin>>code[i];
        fflush(stdin);
        cout<<"Price: ";
        cin>>price[i];
        fflush(stdin);
        cout<<"Quantity: ";
        cin>>quantity[i];
        fflush(stdin);
        Total[i]=price[i]*quantity[i];
        i++;
        cout<<"\nDo you want to add another product?\n(Y/N): ";
        cin>>ch;
    }
        for (int j = 1; j < i; j++)
        {
            Sum += Total[j];
        }
    return Sum;
    
    }
    void display(int x){
    cout << "\nSl.No."
         << "  "
         << "Code"
         << "     ";
    cout << "Name"
         << "    "
         << "Price"
         << "    "
         << "Quantity"
         << "    "
         << "Total\n";
         cout<<"___________________________________________________________________\n\n";

    for (int j = 1; j < i; j++)
    {
        cout<<j<<"\t";
        cout << code[j] << "\t";
        cout << name[j] << "\t";
        cout << price[j] << "\t" << quantity[j] << "\t" << Total[j];
        cout << "\n";
    }
    cout<<"_________________________________________________________________________\n";
    cout<<"\n                           Grand Total = Rs."<<x<<"/-";

    }
};

int main()
{
    Shopping ob;
    int a=ob.get();
    ob.display(a);
    return 0;
}
