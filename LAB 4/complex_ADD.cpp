#include <iostream>
using namespace std;
class COMPLEX{
    private:
    int real,ima;
    public:
    void input(){
        cout<<"Enter the value of real part of complex number: ";
        cin>>real;
        cout<<"Enter the value of imaginary part of complex number: ";
        cin>>ima;
    }
    void output(){
        cout<<"The Complex Number: "<<real<<"+"<<ima<<"i";
    }
    void ADD(int a,COMPLEX c1)
{
    COMPLEX r;
    r.real=a+c1.real;
    r.ima=c1.ima;
    cout<<"\nTHE ADDITION OF ONE INTEGER AND COMPLEX NNUMBER: \n";
    cout<<r.real<<"+"<<r.ima<<"i";
}
void ADD(COMPLEX c1, COMPLEX c2){
    COMPLEX r;
    r.real=c1.real+c2.real;
    r.ima=c1.ima+c2.ima;
    cout<<"\nTHE ADDITION OF TWO COMPLEX NUMBER: \n";
    cout<<r.real<<"+"<<r.ima<<"i";
}
};
int main (void){
    COMPLEX c1,c2,c3;
    cout<<"\n1st Complex Number"<<endl;
    c1.input();
    cout<<"\n2nd Complex Number"<<endl;
    c2.input();
    cout<<"\n1st Complex Number"<<endl;
    c1.output();
    cout<<"\n2nd Complex Number"<<endl;
    c2.output();
    c3.ADD(7,c1);
    c3.ADD(c1,c2);
return 0;
}