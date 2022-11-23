// PROGRAMMED BY AKSHAT JAISWAL
#include <iostream>
#include <fstream>
using namespace std;
int main(void)
{
    ifstream fin("a1.txt");
    ofstream fout("a2.txt");
    char ch;
    while (fin.eof() == 0)
    {
        fin >> ch;
        fout << ch;
    }
    fin.close();
    fout.close();
    return 0;
}
// END OF LINE