// PROGRAMMED BY AKSHAT JAISWAL
#include <iostream>
#include <fstream>

using namespace std;
int main(void)
{
    ifstream fin("a1.txt");
    int count = 1;  //Will not count first word so set counter to 1
    char ch;
    while (fin)
    {
        fin.get(ch);
        if (ch == ' ' || ch=='\n')
        {
            count++;
        }
    }
    cout << "\nNumber of Words: " << count+1;
    fin.close();
    return 0;
}
// END OF LINE