#include <iostream>
using namespace std;
class Age
{   
    public:

    struct DATE
    {
        int day, DOB_day;
        int month, DOB_month;
        int year, DOB_year;
    };
    struct DATE d1;
};
int main(void)
{
    Age a1;
    int month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int year_diff, month_diff, day_diff;
    float age;
    cout<<"Enter Today's Date: \n";
    cout<<"Day: \n";
    cin>>a1.d1.day;
    cout<<"Month: \n";
    cin>>a1.d1.month;
    cout<<"Year: \n";
    cin>>a1.d1.year;

    cout<<"\nEnter your Date of Birth: \n";
    cout<<"Day: \n";
    cin>>a1.d1.DOB_day;
    cout<<"Month: \n";
    cin>>a1.d1.DOB_month;
    cout<<"Year: \n";
    cin>>a1.d1.DOB_year;

    cout<<"\n\nToday's Date: "<<a1.d1.day<<"/"<<a1.d1.month<<"/"<<a1.d1.year;
    cout<<"\nYour DOB: "<< a1.d1.DOB_day<<"/"<< a1.d1.DOB_month<<"/"<< a1.d1.DOB_year;

    if (a1.d1.DOB_day > a1.d1.day)
    {
        a1.d1.day += month[a1.d1.DOB_month - 1];
        a1.d1.month -= 1;
    }
    if (a1.d1.DOB_month > a1.d1.month)
    {
        a1.d1.year -= 1;
        a1.d1.month += 12;
    }
    day_diff = a1.d1.day - a1.d1.DOB_day;
    month_diff = a1.d1.month - a1.d1.DOB_month;
    year_diff = a1.d1.year - a1.d1.DOB_year;

    cout<<"\n\nYour Age:\nYears: " <<year_diff<<" Months: "<<month_diff <<" Days: "<< day_diff <<endl;

    return 0;
}