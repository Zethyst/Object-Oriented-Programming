#include <iostream>
using namespace std;
struct TIME { int sec, min, hrs; };
void addtime(struct TIME t1, struct TIME t2, struct TIME *add);
int main()
 {
   struct TIME startTime, stopTime, add;

   cout<<"[Enter the start time] \n\n";
   cout<<"Enter hours, minutes and seconds: ";
   cin>>startTime.hrs;
   cin>>startTime.min;
   cin>>startTime.sec;

   cout<<"[Enter the stop time] \n\n";
   cout<<"Enter hours, minutes and seconds: ";
   cin>>stopTime.hrs;
   cin>>stopTime.min;
   cin>>stopTime.sec;

   addtime(startTime, stopTime, &add);
   cout<<"\nTime Addition: "<< startTime.hrs<< startTime.min << startTime.sec<<" + ";
   cout<<stopTime.hrs<<stopTime.min<<stopTime.sec<<endl;
   cout<< add.hrs<<add.min<<add.sec;
   return 0;
}
void addtime(struct TIME start, struct TIME stop, struct TIME *add) 
{
   add->min = start.min + stop.min;
   add->hrs = start.hrs + stop.hrs;
}