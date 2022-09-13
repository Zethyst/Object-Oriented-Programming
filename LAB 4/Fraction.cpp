#include <iostream>
using namespace std;
class Fraction{
    private:
    int num,dom;
    public:
    void input(){
        cout<<"Enter Numerator: ";
        cin>>num;
        cout<<"Enter Denominator: ";
        cin>>dom;
    }
    void output(){
        cout<<"\nThe Fraction: "<<num<<"/"<<dom;
    }
    void ADD(Fraction ob1, Fraction ob2){
        Fraction r;
        r.num=(ob1.num*ob2.dom)+(ob1.dom*ob2.num);
        r.dom=ob1.dom*ob2.dom;
        cout<<"\nADDITION: "<<r.num<<"/"<<r.dom;
    }
    void SUB(Fraction &ob1, Fraction &ob2){
        Fraction r;
        r.num=(ob1.num*ob2.dom)-(ob1.dom*ob2.num);
        r.dom=ob1.dom*ob2.dom;
        cout<<"\nSUBTRACTION: "<<r.num<<"/"<<r.dom;
    }
    void MUL(Fraction &ob1, Fraction &ob2){
        Fraction r;
        r.num=(ob1.num)*(ob2.num);
        r.dom=(ob1.dom)*(ob2.dom);
        cout<<"\nMULTIPLICATION: "<<r.num<<"/"<<r.dom;
    }
};
int main (void){
    Fraction a1,a2,a3;
    a1.input();
    a2.input();
    a1.output();
    a2.output();
    a3.ADD(a1,a2);
    a3.SUB(a1,a2);
    a3.MUL(a1,a2);
 
return 0;
}