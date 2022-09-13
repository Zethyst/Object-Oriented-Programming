#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Shopping
{
public:
    struct data
    {
     string name,code;
    int price, quantity,Total,Sum=0;
    };
    struct data stu[100];
    void get_details()
    {
        cout << "Enter number of students: ";
        cin >> s.n;
        for (s.i = 0; s.i < s.n; s.i++)
        {
            cout << "\nEnter the student " << s.i + 1 << " name :";
            cin >> stu[s.i].name;
            fflush(stdin);
            cout << "\nEnter the student " << s.i + 1 << " roll no. :";
            cin >> stu[s.i].roll;
            fflush(stdin);
            cout << "\nEnter the student" << s.i + 1 << "marks in 5 subjects: ";
            cout << "\nEnglish: ";
            cin >> stu[s.i].eng_marks;
            cout << "\nMaths: ";
            cin >> stu[s.i].math_marks;
            cout << "\nPhysics: ";
            cin >> stu[s.i].phy_marks;
            cout << "\nChemistry: ";
            cin >> stu[s.i].chem_marks;
            cout << "\nComputer: ";
            cin >> stu[s.i].comp_marks;

            s.total[s.i] += stu[s.i].eng_marks + stu[s.i].math_marks + stu[s.i].phy_marks + stu[s.i].chem_marks + stu[s.i].comp_marks;
            s.avg[s.i] = (s.total[s.i]) / 5;
        }
    }
    void output()
    {

        cout << endl;
        for (s.i = 0; s.i < s.n; s.i++)
        {
            cout << "\n\nStudent" << s.i + 1 << "details: \n";
            cout << "\nName: \n"
                 << stu[s.i].name;
            cout << "\nRoll NO.: \n"
                 << stu[s.i].roll;
            cout << "\nMarks--->\n";
            cout << "English\t"
                 << "Maths\t"
                 << "Computer\t"
                 << "Physics\t"
                 << "Chemistry\t"
                 << endl;
            cout << stu[s.i].eng_marks << "\t" << stu[s.i].math_marks << "\t" << stu[s.i].comp_marks << "\t" << stu[s.i].phy_marks << "\t" << stu[s.i].chem_marks << "\t" << endl;
            cout << "\nTotal: " << s.total[s.i];
            cout<<"\nAverage: "<<s.avg[s.i];
        }
    }
    void average(){
        cout<<"\nStudents who scored above average: "<<endl;
        for (s.i = 0; s.i < s.n; s.i++)
        {
        if(s.avg[s.i]>50){
        cout<<stu[s.i].name;
        }
        }
        cout<<"\nStudents who scored below average: "<<endl;
        for (s.i = 0; s.i < s.n; s.i++)
        {
        if(s.avg[s.i]<50){
        cout<<stu[s.i].name;
        }
        }
    }
   bool compareTwoStudents(data a, data b)
{
    if (a.total != b.total)
        return a.total > b.total;
 
    if (a.math_marks != b.math_marks)
        return a.math_marks > b.math_marks;
 
    if (a.phy_marks != b.phy_marks)
        return a.phy_marks > b.phy_marks;
 
    return (a.chem_marks > b.chem_marks);
}
    
    void computeRanks(data a[], int n)
{
    // To calculate total marks for all Students
    for (int s.i = 0; s.i < s.n; s.i++)
        a[s.i].total = a[s.i].math_marks + a[s.i].phy_marks + a[s.i].chem_marks;
 
    // Sort structure array using user defined
    // function compareTwoStudents()
    sort(a, a + n, compareTwoStudents);
 
    // Assigning ranks after sorting
    for (int s.i = 0; s.i < s.n; s.i++)
        a[s.i].rank = s.i + 1;
}
    };
    int main(void)
    {   
        Student ob;
        ob.get_details();
        ob.output();
        ob.average();
        ob.compareTwoStudents();
        ob.computeRanks();
        return 0;
    }