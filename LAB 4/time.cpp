#include <iostream>
using namespace std;
class Time{
    private:
    int hr,min,sec;
    public:
    void input(){
        cout<<"\nEnter Hour: ";
        cin>>hr;
        cout<<"\nEnter Minute: ";
        cin>>min;
        cout<<"\nEnter Second: ";
        cin>>sec;
    }
    void output(){
        cout<<"\nHour: "<<hr<<endl;
        cout<<"Min: "<<min<<endl;
        cout<<"Sec: "<<sec<<endl;
    }
    void add(Time a11, Time a22){
        Time r;
        r.hr=a11.hr+a22.hr;
        r.min=a11.min+a22.min;
             if(r.min>60){
            r.min=r.min-60;
            r.hr++;
        }
        r.sec=a11.sec+a22.sec;
            if(r.sec>60){
            r.sec=r.sec-60;
            r.min++;
        }
        cout<<"\n\nADDED VALUES: \n"<<endl;
        cout<<"\nHour: "<<r.hr;
        cout<<"\nMinutes: "<<r.min;
        cout<<"\nSecond: "<<r.sec;
    }
};
int main (void){
    Time a1,a2,a3;
    cout<<"1st Time: \n";
    a1.input();
    cout<<"2nd Time: \n";
    a2.input();
    cout<<"\n1st Time: ";
    a1.output();
    cout<<"\n2nd Time: ";
    a2.output();
    a3.add(a1,a2);

 
return 0;
}