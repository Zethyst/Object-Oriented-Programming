#include <iostream>
using namespace std;
class abc{
    int i,r;
    public:
    void get()
    {
        cout<<"Enter two values: ";
        cin>>r>>i;
    }
    void display(){
        cout<<r<<"\t"<<i<<"\t"<<endl;
    }
   abc add(abc a22){
        abc t;
        t.r=r+a22.r;
        t.i=i+a22.i;
        return (t);
    }
};
int main (void){
 abc a1,a2,a3;
 a1.get();
 a2.get();
 a1.add(a2);
 a1.display();
 a2.display();
return 0;
}