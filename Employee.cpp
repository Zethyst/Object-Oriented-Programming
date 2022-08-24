#include <iostream>
using namespace std;

class Employee{

    public:
    string name;
    int salary;

        Employee emp(string n, int s,int sp){
            this->name=n;
            this->salary=s;
        }
        void display(){
            cout<<"Employee Name => "<<this->name<<endl<<"Employee salary => "<<this->salary<<endl;
        }

        void get_SP(){
            cout<<"The Password => "<<secret_passwd<<endl;
        }

    private:
    int secret_passwd=8533;
};

class Programmer : public Employee{
    public:

    int errors;
    void programmer_name(){
        cout<<"Programmer's name is "<<name<<endl;
    }
};

int main (void){
    Employee emp;
    emp.name="Akshat";
    emp.salary=90000;
    emp.display();
    emp.get_SP();

    Programmer akshu;
    akshu.errors=1;
    akshu.programmer_name();
return 0;
}