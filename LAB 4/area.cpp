#include <iostream>

using namespace std;
using namespace std;
class AREA_REC_SQ{
private:
int length,breadth;
public:
void get_rect(){
cout<<"Enter the value of length & breadth: ";
cin>>length>>breadth;
}
void get_sq(){
cout<<"Enter the value of length: ";
cin>>length;
}
friend double AREA(AREA_REC_SQ,AREA_REC_SQ);
};
double AREA(AREA_REC_SQ ob1,AREA_REC_SQ ob2){
int ch;
double area1,area2;
cout<<"Enter 1 for Area of Rectangle\nEnter 2 for Area of Square\nEnter your choice: ";
cin>>ch;
switch (ch)
{
case 1:
area1=ob1.length*ob1.breadth;
cout<<"\nThe Area of Rectangle: "<<area1<<endl;
break;
case 2:
area2=ob2.length*ob2.length;
cout<<"\nThe Area of Square: "<<area2<<endl;
}
}
int main (void){
AREA_REC_SQ a1;
AREA_REC_SQ a2;
a1.get_rect();
a2.get_sq();
AREA(a1,a2);
return 0;
}