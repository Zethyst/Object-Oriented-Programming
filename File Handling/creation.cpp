//PROGRAMMED BY AKSHAT JAISWAL
#include <iostream>
#include <fstream>
using namespace std;
int main (void){
    int roll_no,mark1,mark2,mark3;
    ofstream o1("File.txt");
    // o1<<"Hello";
    cout<<"\nEnter Roll No:";
    cin>>roll_no;
    o1<<roll_no;
    cout<<"\nEnter Marks in 3 subjects: ";
    cin>>mark1>>mark2>>mark3;
    o1<<mark1<<mark2<<mark3;
    o1.close();
    
    ifstream i1("File.txt");
    int v1,v2,v3,v4;
    i1>>v1>>v2>>v3>>v4;
    i1.close();
return 0;
}
//END OF LINE