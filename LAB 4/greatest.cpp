#include <iostream>
using namespace std;
class B;
class A{
    int a;
    public:
    void getdata()
    {
      cout<<"Enter the value of a :"<<endl;
      cin>>a;
    }
    friend int greatest(A,B);
};
class B{
    int b;
    public:
    void getdata()
    {
        cout<<"Enter the value of b :"<<endl;
        cin>>b;
    }
    friend int greatest(A,B);
};
int greatest(A aa,B bb)
{
if (aa.a>bb.b)
cout<<"The greatest is: "<<aa.a<<endl;
else if(aa.a<bb.b)
cout<<"The greatest is :"<<bb.b<<endl;
else
cout<<"Both are same"<<endl;
return 0;
}
int main (void)
{
A aa;
B bb;
aa.getdata();
bb.getdata();
greatest(aa,bb);
return 0;
}