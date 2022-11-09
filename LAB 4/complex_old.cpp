#include <iostream>
using namespace std;
class Complex{
    private:
    int a,b;
    public:
    void get_number(){
        cout<<"\nEnter the real part of the complex number: ";
        cin>>a;
        cout<<"\nEnter the imaginary part of the complex number: ";
        cin>>b;
    }
    void display(){
        cout<<"\nThe complex number is "<<a<<" "<<b<<"i"<<endl;
    }
    void ADD(Complex a1,Complex a2){
        int sum_real,sum_ima;
        sum_real=a1.a+a2.a;
        sum_ima=a1.b+a2.b;
        cout<<"\nThe Addition of Two Complex Numbers: "<<sum_real<<" + "<<sum_ima<<"i"<<endl;
    }
};
int main (void){
    Complex a1,a2,a3;
    a1.get_number();
    a2.get_number();
    a1.display();
    a2.display();
    a3.ADD(a1,a2);

 
return 0;
}