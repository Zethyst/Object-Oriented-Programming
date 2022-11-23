// PROGRAMMED BY AKSHAT JAISWAL
#include <iostream>
#include <fstream>
using namespace std;
int main(void)
{
    int choice;
    int count = 0;
    char ch;
    while (1)
    {

        cout << "\n---------MENU-----------" << endl;
        cout << "1. Count the number of characters" << endl;
        cout << "2. Count the number of tabs" << endl;
        cout << "3. Count the number of newline" << endl;
        cout << "4. Exit" << endl;
        cout << "\nEnter your choice" << endl;
        cin >> choice;
        if (choice == 1)
        {
            ifstream fin("a1.txt");
            while (fin.eof() == 0)
            {
                cout << ch;
                fin >> ch;
                count++;
            }
            fin.close();
            cout << "\nNumber of characters: " << count - 1;
        }
        if (choice == 2)
        {
            ifstream fin("a1.txt");
            int count = 0;
            char ch;
            while (fin)
            {
                fin >>ch;
                if (ch == '\t')
                {
                    count++;
                }
            }
            cout << "\nNumber of Tabs: " << count;
            fin.close();
        }
        if (choice == 3)
        {
            ifstream fin("a1.txt");
            int count = 0;
            char a[30];
            while (fin)
            {
                fin.getline(a, 30);
                count++;
            }
            cout << "\nNumber of Lines: " << count-1;
            fin.close();
        }
        if (choice == 4)
        {
            exit(0);
        }
    }
    return 0;
}
// END OF LINE