#include <iostream>
using namespace std;

class student
{
protected:
    int age, roll;
    char name[100]; 

public:
    void get()
    {
        cout << "\nEnter the name of student: ";
        cin >> name;
        cout << "\nEnter the age of student: ";
        cin >> age;
        cout << "\nEnter the roll no of student: ";
        cin >> roll;
    }
    void display()
    {
        cout << "\n\nTHE DETAILS: \n";
        cout << "\nName: " << name;
        cout << "\nAge: " << age;
        cout << "\nRoll No.: " << roll;
    }
};
class Test : public student
{
protected:
    int marks_eng, marks_maths, marks_comp, marks_physics, marks_chemistry;

public:
    void get_marks()
    {
        cout << "\n\nEnter the marks in English: ";
        cin >> marks_eng;
        cout << "\nEnter the marks in Maths: ";
        cin >> marks_maths;
        cout << "\nEnter the marks in Computer: ";
        cin >> marks_comp;
        cout << "\nEnter the marks in Physics: ";
        cin >> marks_physics;
        cout << "\nEnter the marks in Chemistry: ";
        cin >> marks_chemistry;

        cout << "\n\nTHE MARKS: \n";
        cout << "\nEnglish: " << marks_eng;
        cout << "\nMaths: " << marks_maths;
        cout << "\nComputer: " << marks_comp;
        cout << "\nPhysisc: " << marks_physics;
        cout << "\nChemistry: " << marks_chemistry;
    }
};
class Result : public Test
{
private:
int sum=0;
float avg;
public:
void final(){
    sum+=marks_chemistry+marks_comp+marks_eng+marks_maths+marks_physics;
    avg=(sum/5);
    cout<<"\n\nTotal: "<<sum;
    cout<<"\nPercentage: "<<avg<<" %";
}

};

int main(void)
{
    Result a3;
    a3.get();
    a3.display();
    a3.get_marks();
    a3.final();
    return 0;
}