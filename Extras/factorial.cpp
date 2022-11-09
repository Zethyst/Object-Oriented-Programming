#include <iostream>
using namespace std;
class factorial{

    private: 
    int a;
    int f=1;
    public:
    void get(){
        cout<<"Enter a number: ";
        cin>>a;
    }
    void fact(){
        for (int i = 1; i <= a; i++)
        {
            f*=i;
        }
    }
    void display(){
        cout<<"Factorial => "<<f<<endl;
    }
    
} fact;

int main (void)
{
   fact.get();
   fact.fact();
   fact.display();
    return 0;
}