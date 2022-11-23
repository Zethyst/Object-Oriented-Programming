// PROGRAMMED BY AKSHAT JAISWAL
#include <iostream>
#include <fstream>
using namespace std;
int main(void)
{
    ifstream fin("a1.txt");
    int count = 0;
    char ch;
    while (fin.eof() == 0)
    {
        fin >> ch;
        if (ch == '\n')
        {
            count++;
        }

    }
    cout << "\nNumber of Lines: " << count;
    fin.close();
    return 0;
}
// END OF LINE