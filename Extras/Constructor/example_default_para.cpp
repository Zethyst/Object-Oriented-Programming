#include <iostream>
using namespace std;
class XYZ{
    private:
    int i,j,k;
    public:
    XYZ(){
        i=j=k=5;
    }
    XYZ(int p,int q,int r){
        i=p;
        j=p+q;
        k=i+j+r;
    }
    void display(){
        cout<<"\n"<<i<<"\n"<<j<<"\n"<<k;
    }

};
int main (void){
    XYZ a1,a2;
    XYZ a2(5,6,7);
    a1.display();
    a2.display();
    // a3.display();

 
return 0;
}