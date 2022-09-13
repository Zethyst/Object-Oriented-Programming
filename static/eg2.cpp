#include <iostream>
using namespace std;
class A{
    static int p,q;
    public:
    void count(){
        p=p+1;
        q=q*2;
        cout<<p<<"\t"<<q<<endl;
    }
};
int A :: p=5;
int A :: q=2;
int main (void){
 A a1,a2,a3,a4;
 a1.count();
 a2.count();
 a3.count();
 a4.count();
return 0;
}