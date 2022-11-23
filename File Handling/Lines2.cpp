// PROGRAMMED BY AKSHAT JAISWAL
#include <iostream>
#include <fstream>
using namespace std;
int main(void)
{
    ifstream fin("a1.txt");
    int count = 0;
    char a[30];
    while (fin)
    {
        fin.getline(a, 30);
        count++;
    }
    cout << "\nNumber of Lines: " << count;
    fin.close();
    return 0;
}
// END OF LINE