// PROGRAMMED BY AKSHAT JAISWAL
#include <iostream>
#include <fstream>
using namespace std;
int main(void)
{
    char str[100],str2[100];
    ofstream fout;
    fout.open("New.txt", ios::out);
    cout<<"\nEnter a sentence: ";
    cin.getline(str,100);
    fout<<str;
    fout.close();
    ifstream fin;
    fin.open("New.txt",ios::in);
    fin>>str2;
    cout<<"Sentence is: ";


    return 0;
}
// END OF LINE