// PROGRAMMED BY AKSHAT JAISWAL
#include <iostream>
#include <fstream>
using namespace std;
int main(void)
{
    ofstream fout("student.txt");
    char Name[30];
    int roll_no,phy,chem,maths;
    char gender;

    cout << "\nEnter your Name: ";
    cin.getline(Name, 30);
    cout << "\nEnter your Roll No: ";
    cin >> roll_no;
    cout << "\nEnter your Gender: ";
    cin >> gender;
    cout<<"\nEnter Physics Marks: ";
    cin>>phy;
    cout<<"\nEnter Chemistry Marks: ";
    cin>>chem;
    cout<<"\nEnter Mathematics Marks: ";
    cin>>maths;


    fout<<"Name: "<<Name<<"\n"<<"Roll No: "<<roll_no<<"\n"<<"Gender: "<<gender;
    fout<<"\nPhysics Marks: "<<phy<<"\n"<<"Chemistry Marks: "<<chem<<"\n"<<"Mathematics Marks: "<<maths;
    return 0;
}
// END OF LINE