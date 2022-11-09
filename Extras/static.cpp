#include <iostream>
using namespace std;
class A{
    private:
    static int p;
    // int q=7;
    public:
    static void f2(){
        p=p*5;
        cout<<p;
    }
    static void count(){
        p+=1;
        cout<<"\n"<<p;
    }
};
int A :: p=2;
int main (void){
    A :: f2();
    A :: count();
    A :: count();
    A :: count();
 
return 0;
}