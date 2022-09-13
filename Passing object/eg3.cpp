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
    void compute(abc a11){
        i=a11.i+5;
        j=a11.j+10;
        k=a11.k*2;
        i=a11.i;
        j=a11.j;
        k=i+j;

    }
    void display(){
        cout<<i<<"\t"<<j<<"\t"<<k<<"\t"<<endl;
    }
};
int main (void){
 abc a1,a2,a3;
 a1.get(7,8,9);
 a1.display();
 a2.compute(a1);
 a2.display();
return 0;
}