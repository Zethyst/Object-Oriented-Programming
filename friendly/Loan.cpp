#include <iostream>
#include <cmath>
using namespace std;
class Interest; // Forward Declaration
class Basic{
private:
int amount;
public:
void get_amount(){
    cout<<"Enter the loan amount taken from bank: ";
    cin>>amount;
}
friend class Interest;
};

class Interest{
    private:
    int r,t,SI,CI;
    public:
    void get(){
    cout<<"Enter the rate of interest: ";
    cin>>r;
    cout<<"Enter the time: ";
    cin>>t;
    }

    void Simple_Interest(Basic ob){
        SI=(ob.amount*r*t)/100;
        cout<<"Simple Interest: "<<SI<<endl;
        CI = ob.amount*pow((1+r/100),t);
        cout<<"Compoun Interest: "<<CI<<endl;
    }
};
int main (void){
 Basic a1;
 Interest a2;
 a1.get_amount();
 a2.get();
 a2.Simple_Interest(a1);

return 0;
}