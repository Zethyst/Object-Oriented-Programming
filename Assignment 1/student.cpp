#include <iostream>
using namespace std;

class student
{
private:
    int roll;
    float total,avg;
    char name[100];
    int marks_eng, marks_maths, marks_comp, marks_hindi, marks_physics, marks_chemistry;

public:
    void get()
    {
        cout << "\nEnter the name of student: ";
        cin.getline(name, 100);
        cout << "\nEnter the roll no of student: ";
        cin >> roll;
        cout << "\nEnter the marks in english: ";
        cin >> marks_eng;
        cout << "\nEnter the marks in Mathematics: ";
        cin >> marks_maths;
        cout << "\nEnter the marks in Computer: ";
        cin >> marks_comp;
        cout << "\nEnter the marks in Physics: ";
        cin >> marks_physics;
        cout << "\nEnter the marks in Chemistry: ";
        cin >> marks_chemistry;
        cout << "\nEnter the marks in Hindi: ";
        cin >> marks_hindi;
    }
    void display()
    {
        cout << "\n\nTHE DETAILS: \n";
        cout << "\nName: " << name;
        cout << "\nRoll No.: " << roll;
        cout << "\nMarks--->\n";
        cout << "English\t"
             << "Maths\t"
             << "Computer\t"
             << "Physics\t"
             << "Chemistry\t"
             << "Hindi\t" << endl;
        cout << marks_eng << "\t" << marks_maths << "\t" << marks_comp << "\t" << marks_physics << "\t" << marks_chemistry << "\t" << marks_hindi << "\t" << endl;
    }
    void compute()
    {
        total = marks_eng + marks_maths + marks_comp + marks_physics + marks_chemistry + marks_hindi;
        cout << "\nTotal Marks: " << total;
        avg=total/6;
        cout << "\nAverage: " << avg<<endl;

    }
    void grade()
    {
        if (avg <= 100 && avg > 90)
            cout << "Outstanding!";
        else if (avg <= 90 && avg > 80)
            cout << "Excellent!";
        else if (avg <= 80 && avg > 70)
            cout << "Very Good";
        else if (avg <= 70 && avg > 60)
            cout << "Good";
        else if (avg <= 60 && avg > 50)
            cout << "Satisfactory";
        else if (avg <= 50 && avg > 40)
            cout << "Poor";
        else
            cout << "Fail";
    }
};

int main(void)
{
    student a1;
    a1.get();
    a1.display();
    a1.compute();
    cout<<"Grade: ";
    a1.grade();
    return 0;
}