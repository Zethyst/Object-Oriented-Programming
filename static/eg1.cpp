#include <iostream>
using namespace std;
class A{
    static int p;
    int b,c;
    public:
    void get(){
        b=10;
        c=b+5;
        p=p+b+c;
    }
    void display(){
        cout<<p<<" "<<b<<" "<<c<<endl;
    }
};
int A :: p=5;
int main (void){
 A a1,a2;
 a1.get();
 a1.display();
 a2.display();
return 0;
}