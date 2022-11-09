/* PROGRAMED BY AKSHAT JAISWAL*/

#include <iostream>
#include <string.h>
using namespace std;
class String
{
private:
    char *str;
public:
    String()
    {
        str = new char[20];
    }
    String(char *s)
    {
        str = s;
    }
    void length()
    {
        cout << "\nLength of " << str << " is: " << strlen(str);
    }
    String operator+(String ob)
    {
        String t;
        strcpy(t.str, str);
        strcat(t.str, ob.str);
        return (t);
    }
    void operator=(String ob)
    {
        int len = strlen(ob.str);
        str = new char[len];
        strcpy(str, ob.str);
    }
    bool operator+=(String ob)
    {
        return (strcmp(str, ob.str));
    }
    void display()
    {
        cout << str;
    }
};
int main(void)
{
    String s1("Lightning");
    String s2("Thunder");
    String result;
    s1.length();
    s2.length();

    result = s2 + s1;
    cout << "\nThe String after Concatenation is: ";
    result.display();

    s1 = s2;

    cout << "\nThe String after Copying is: ";
    s1.display();
    s2.display();

    if (s1 += s2)
    {
        cout << "\nThe Strings are Not Equal";
    }
    else
        cout << "\nThe Strings are Equal";

    return 0;
}
//END OF LINE