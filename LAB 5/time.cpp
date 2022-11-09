#include <iostream>
using namespace std;
class Time{
    private: 
    int hr;
    int min;
    public:
    Time(){
        hr=4;
        min=8;
    }
    Time(int h,int m=0){
        hr=h;
        min=m;
    }
    void display(){
        cout<<"\nHour: "<<hr;
        cout<<"\nMinutes: "<<min;
    }
};
int main (void){
 Time ob1,ob2(1,2);
 ob1.display();
 ob2.display();

return 0;
}