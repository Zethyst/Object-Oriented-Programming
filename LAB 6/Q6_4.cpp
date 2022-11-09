#include <iostream>
using namespace std;

class student
{
protected:
    int roll;
    char name[100];

public:
    virtual void get()
    {
        cout << "\nEnter the name of student: ";
        cin >> name;
        cout << "\nEnter the roll no of student: ";
        cin >> roll;
    }
    virtual void display()
    {
        cout<<"\nThe Details: ";
    }
};
 class Sports : virtual public student
{
protected:
    int s_grade;

public:
    void get()
    {
        cout << "\nEnter the sports grade: ";
        cin >> s_grade;
    }
};
class Exam : virtual public student
{
protected:
    int e_grade;

public:
    void get()
    {
        cout << "\nEnter the exam grade: ";
        cin >> e_grade;
        e_grade=78;
    }
};
class Result : public Sports, public Exam
{
private:
    char r[2];

public:
    void get()
    {
        if (e_grade >= 30)
            r[0] = 'P';
        else
            r[0] = 'F';
        if (s_grade >= 30)
            r[1] = 'P';
        else
            r[1] = 'F';
    }
    void display()
    {
        cout << "\n\nTHE DETAILS: \n";
        cout << "\nName: " << name;
        cout << "\nRoll No.: " << roll << endl;

        cout << "\nThe Final Result: " << endl;
        cout << "Sports grade: " << r[0] << endl;
        cout << "Exam grade: " << r[1] << endl;
    }
};
int main(void)
{
    student S, *p;
    p = &S;
    p->get();
    Sports X;
    Exam Y;
    Result Z;
    p = &X;
    p->get();
    p = &Y;
    p->get();
    p = &Z;
    p->get();
    p->display();

    return 0;
}