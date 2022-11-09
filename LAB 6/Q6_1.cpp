#include <iostream>
using namespace std;
class Circle
{
    protected: 
    int radius;
    public:
    Circle(){
        radius=4;
    }
    virtual void area(){
        cout<<"\nThe Area of Circle: "<<3.14*radius*radius;
    }
};
class Rectangle : public Circle{

    public:
    Rectangle(){
        radius=7;
    }
     void area(){
        cout<<"\nThe Area of Rectangle: "<<radius*radius;
    }
};

int main (void){
    Rectangle rec,*p1;
    Circle cic,*p2;
    p1=&rec;
    p2=&cic;
    p1->area();
    p2->area();
 
return 0;
}