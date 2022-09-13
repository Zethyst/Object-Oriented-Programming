#include <iostream>
using namespace std;
class Employee
{
  private:
  char name[20],dept[10];
  int emp_no,salary;
  public:
  void in();
  void out();
};
    inline void Employee :: in(){
    cout<<"Enter the details :\nName: ";
    cin.getline(name,20);
    cout<<"Department: ";
    cin>>dept;
    cout<<"Employee No.: ";
    cin>>emp_no;
    cout<<"Salary: ";
    cin>>salary;
    }
    inline void Employee :: out(){
        cout<<"\nTHE DETAILS:"<<endl<<"Employee Name: "<<name<<"\nDepartment: "<<dept<<"\nEmployee No.: "<<emp_no<<"\nSalary: "<<salary<<endl;
    }
int main()
{
    Employee E;
    E.in();
    E.out();
    
    return 0;
}