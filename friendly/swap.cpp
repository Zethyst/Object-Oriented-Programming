#include <iostream>
using namespace std;
class SWAP
{
private:
int x,y;
public:
void get_number(){
    cout<<"Enter two numbers one by one: ";
    cin>>x>>y;
}
void display(){
    cout<<"The Value of two numbers are "<<x<<" "<<y<<endl;
}
 friend void swp(SWAP &ob){
    int temp;
    temp=ob.x;
    ob.x=ob.y;
    ob.y=temp;
}
};
int main (void){
    SWAP a1;
    a1.get_number();
    a1.display();
    swp(a1);
    a1.display();
 
return 0;
}