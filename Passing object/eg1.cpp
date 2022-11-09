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
    void compute(abc a11,abc a22){ 
        i=a11.i+a22.i;
        j=a11.j+a22.j;
        k=a11.k+a22.k;
    }
    void display(){
        cout<<i<<"\t"<<j<<"\t"<<k<<"\t"<<endl;
    }
};
int main (void){
 abc a1,a2,a3;
 a1.get(3,4,5);
 a1.display();
 a2.get(10,20,30);
 a2.display();
 a3.compute(a1,a2);
 a3.display();
return 0;
}