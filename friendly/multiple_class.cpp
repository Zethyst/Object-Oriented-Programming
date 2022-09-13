#include <iostream>
using namespace std;

class B; //Forward Declaration

class A
{
    private: 
    int p;
    public: 
    void get(){
        cout<<"Enter the value of p: ";
        cin>>p;
    }
    friend void f1(A,B);
    friend void display(A,B);
};
class B{
    private: 
    int q;
    public: 
    void get(){
        cout<<"Enter the value of q: ";
        cin>>q;
    }
        friend void f1(A,B);
    friend void display(A,B);
    
};
 void f1(A a11, B a22){
    int temp;
    temp=a11.p;
    a11.p=a22.q;
    a22.q=temp;
    cout<<"The Value of p & q is: "<<endl<<a11.p<<"\t"<<a22.q<<endl;
}
void display(A a11, B b22){
    cout<<"\nValue of A: "<<a11.p;
    cout<<"\nValue of B: "<<b22.q;

}

int main (void){
    A a1;
    B b1;
    a1.get();
    b1.get();
    f1(a1,b1);
    display(a1,b1);
 
return 0;
}