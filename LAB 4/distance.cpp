#include <iostream>
using namespace std;
class Distance{
    private:
    int feet,inches;
    int result_feet,result_inches;
    public:
    void input(){
        cout<<"Enter Feet: ";
        cin>>feet;
        cout<<"Enter Inch: ";
        cin>>inches;

    }
    void output(){
        cout<<"\nFeet: "<<feet<<endl;
        cout<<"Inches: "<<inches<<endl;
    }
    void add(Distance a11, Distance a22){
        Distance r;
        r.feet=a11.feet+a22.feet;
        r.inches=a11.inches+a22.inches;
        while (r.inches>12)
        {
            r.inches=r.inches-12;
            r.feet++;
        }
        
        cout<<"\n\nADDED VALUES: "<<endl;
        cout<<"\nFeet: "<<r.feet;
        cout<<"\nInches: "<<r.inches;
    }
};
int main (void){
    Distance a1,a2,a3;
    cout<<"1st Distance: \n";
    a1.input();
    cout<<"2nd Distance: \n";
    a2.input();
    cout<<"\n1st Distance: ";
    a1.output();
    cout<<"\n2nd Distance: ";
    a2.output();
    a3.add(a1,a2);
return 0;
}