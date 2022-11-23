// PROGRAMMED BY AKSHAT JAISWAL
#include <iostream>
#include <fstream>

using namespace std;
int main(void)
{
    ofstream fout("a1.txt");
    int roll = 21052665;
    fout << roll;
    fout.close();
    ifstream fin("a1.txt");
    while (fin.eof() == 0)
    {
        int temp;
        fin >> temp;
        cout << temp;
    }
    fin.close();
    return 0;
}
// END OF LINE