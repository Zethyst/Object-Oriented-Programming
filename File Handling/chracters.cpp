//PROGRAMMED BY AKSHAT JAISWAL
#include <iostream>
#include <fstream>
using namespace std;
int main (void){
    ifstream fin("a1.txt");
    int count=0;
    char ch;
    while (fin.eof()==0)
    {
        cout<<ch;
        fin>>ch;
        count++;
    }
    fin.close();
    cout<<"\nNumber of characters: "<<count-1;
return 0;
}
//END OF LINE