#include <iostream>
using namespace std;

class abc
{
    private:
    int i,j;
    public:
    void get(){
        cout<<"Enter the values of i & j: ";
        cin>>i>>j;
    }
    void display()
    {
        cout<<"Value of i is "<<i<<" and j is "<<j<<endl;}
    friend void compute(abc &a11){
        a11.i=a11.i+5;
        a11.j=a11.j*2;

    }
};
int main (void){
 abc a1,a2,a3;
 a1.get();
 a1.display();
 compute(a1);
 a1.display();
return 0;
}