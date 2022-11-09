#include <iostream>
using namespace std;
class abc{
    int i,j,k;
    public:
    void get(int p,int q,int r)
    {
        i=p;
        j=q;
        k=r;
    }
    void compute(abc &a11){
        a11.i=a11.i*2;
        a11.j=a11.j-3;
        a11.k=a11.k+5;
        i=a11.i*2;
        j=a11.j-3;
        k=a11.k+5;
    }
    void display(){
        cout<<i<<"\t"<<j<<"\t"<<k<<"\t\n"<<endl;
    }
};
int main (void){
 abc a1,a2,a3;
 a1.get(7,8,9);
 a1.display();
 a2.compute(a1);
 a1.display();
 a2.display();
return 0;
}