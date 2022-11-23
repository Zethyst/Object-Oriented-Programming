// PROGRAMMED BY HARSHITA BARNWAL
#include <iostream>
#include <string.h>
using namespace std;
class STR
{
    char *str;

public:
    STR()
    {
        str = new char[20];
    }
    STR(char *s1)
    {
        str = s1;
    }
    void operator+(STR a1)
    {
        STR a2;
        strcpy(a2.str, str);
        strcat(a2.str, a1.str);
        cout << "The two strings after concatenation: " << a2.str << endl;
    }
    void operator=(STR a1)
    {
        int len = strlen(a1.str);
        str = new char[len];
        strcpy(str, a1.str);

        cout << "The string after getting copied: " << str << endl;
    }
    void operator+=(STR a1)
    {
        cout << "The comparison of two strings: " << strcmp(str, a1.str) << endl;
    }
    void length()
    {
        cout << "The length of the first string: " << strlen(str) << endl;
        // cout<<"The length of the second string: "<<str2.size()<<endl;
    }
};
int main(void)
{
    STR a1("F.R.I.");
    STR a2("E.N.D.S");
    STR a3;
    a1 + a2;
    a1 = a2;
    a1 += a2;
    a1.length();
    return 0;
}