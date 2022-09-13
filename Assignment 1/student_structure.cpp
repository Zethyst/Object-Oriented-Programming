#include <bits/stdc++.h>
using namespace std;

struct Student
{
    string name;
    int eng, math, phy, chem, comp, total, avg, rank;
    long roll;
};

bool compareTwoStudents(Student a, Student b)
{
    if (a.total != b.total)
        return a.total > b.total;

    if (a.eng != b.eng)
        return a.eng > b.eng;

    if (a.math != b.math)
        return a.math > b.math;

    if (a.phy != b.phy)
        return a.phy > b.phy;

    if (a.chem != b.chem)
        return (a.chem > b.chem);

    return (a.comp > b.comp);
}

void computeRanks(Student stu[], int n)
{
    for (int i = 0; i < n; i++)
    {
        stu[i].total = stu[i].eng + stu[i].math + stu[i].phy + stu[i].chem + stu[i].comp;
        stu[i].avg = stu[i].total / 5;
    }
    sort(stu, stu + 4, compareTwoStudents);

    for (int i = 0; i < n; i++)
        stu[i].rank = i + 1;
}
int main()
{
    int n = 4;
    Student stu[n];

    // Details of Student 1
    stu[0].name = "Akshat";
    stu[0].roll = 21052646;
    stu[0].eng = 93;
    stu[0].math = 80;
    stu[0].phy = 95;
    stu[0].chem = 85;
    stu[0].comp = 99;

    // Details of Student 2
    stu[1].name = "Harshita";
    stu[1].roll = 21052665;
    stu[1].eng = 96;
    stu[1].math = 95;
    stu[1].phy = 85;
    stu[1].chem = 99;
    stu[1].comp = 89;

    // Details of Student 3
    stu[2].name = "Akash";
    stu[2].roll = 21051199;
    stu[2].eng = 91;
    stu[2].math = 95;
    stu[2].phy = 85;
    stu[2].chem = 80;
    stu[2].comp = 75;

    // Details of Student 4
    stu[3].name = "Dhairya";
    stu[3].roll = 21052662;
    stu[3].eng = 89;
    stu[3].math = 80;
    stu[3].phy = 70;
    stu[3].chem = 90;
    stu[3].comp = 83;

    computeRanks(stu, n);

    cout << "Rank"
         << " "
         << "Name"
         << "  ";
    cout << "English"
         << " "
         << "Maths"
         << " "
         << "Physics"
         << " "
         << "Chemistry"
         << " "
         << "Computer";
    cout << " "
         << "Total"
         << " "
         << "Average\n";
         cout<<"___________________________________________________________________\n\n";

    for (int i = 0; i < n; i++)
    {
        cout << stu[i].rank << "    ";
        cout << stu[i].name << "     ";
        cout << stu[i].eng << "     " << stu[i].math << "     " << stu[i].phy << "     "
             << stu[i].chem << "     " << stu[i].comp << "     ";
        cout << stu[i].total << "    " << stu[i].avg;
        cout << "\n";
    }
    cout << "\nThe Student who scored the highest marks is " << stu[0].name << "\nRoll No: " << 
    stu[0].roll;

    return 0;
}
