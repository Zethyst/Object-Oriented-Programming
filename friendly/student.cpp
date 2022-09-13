#include <iostream>
using namespace std;


class student
{
    private:
    int age,roll;
    char name[100];
    int marks_eng,marks_maths,marks_comp;
    public:
    void get(){
        cout<<"\nEnter the name of student: ";
        cin>>name;
        cout<<"\nEnter the age of student: ";
        cin>>age;
        cout<<"\nEnter the roll no of student: ";
        cin>>roll;
    }
    void display()
    {
        cout<<"\n\nTHE DETAILS: \n";
        cout<<"\nName: "<<name;
        cout<<"\nAge: "<<age;
        cout<<"\nRoll No.: "<<roll;

    }
    friend class Mark;
    // friend void get_marks(student);
    // friend void display_marks(student);
};
class Mark{

    public:

    void get_marks(student s1){
    
    cout<<"\n\nEnter the marks in English: ";
    cin>>s1.marks_eng;
    cout<<"\nEnter the marks in Maths: ";
    cin>>s1.marks_maths;
    cout<<"\nEnter the marks in Computer: ";
    cin>>s1.marks_comp;

            cout<<"\n\nTHE MARKS: \n";
            cout<<"\nEnglish: "<<s1.marks_eng;
            cout<<"\nMaths: "<<s1.marks_maths;
            cout<<"\nComputer: "<<s1.marks_comp;
    }

    // friend void display_marks(Mark);
};


int main (void){
 student a1;
 Mark a2;
 a1.get();
 a1.display();
 a2.get_marks(a1);
return 0;
}