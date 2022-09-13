#include <iostream>
#include <cmath>
using namespace std;
class Bank{
private:
char Bank_name[100];
string Branch;
int IFSC_Code;
public:
void get(){
    cout<<"\nEnter Bank Name: ";
    cin.getline(Bank_name,100);
    cout<<"\nEnter Bank Branch: ";
    cin>>Branch;
    cout<<"\nEnter Bank IFSC Code: ";
    cin>>IFSC_Code;
}
void display(){
    cout<<"\n\nTHE BANK DETAILS: "<<endl;
    cout<<"\nBank Name is: "<<Bank_name;
    cout<<"\nBank Branch is: "<<Branch;
    cout<<"\nBank IFSC Code is: "<<IFSC_Code;
}
friend class Customer;
};

class Customer{
    private:
    string Customer_name;
    long long int Customer_Id;
    int Balance;
    public:
    void get(){
    cout<<"\n\nEnter the Customer's Name: ";
    cin>>Customer_name;
    cout<<"\nEnter the Customer's ID: ";
    cin>>Customer_Id;
    cout<<"\nEnter the Customer's Bank Balance: ";
    cin>>Balance;
    }
    void display(){
    cout<<"\n\nTHE CUSTOMER DETAILS: "<<endl;
    cout<<"\nCustomer Name is: "<<Customer_name;
    cout<<"\nCustomer ID is: "<<Customer_Id;
    cout<<"\nCustomer Bank Balance is: "<<Balance;
    }
};
int main (void){
 Bank a1;
 Customer a2;
 a1.get();
 a1.display();
 a2.get();
 a2.display();

return 0;
}