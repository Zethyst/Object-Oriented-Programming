
#include <iostream>
using namespace std;
class String
{
private:
    char *str;
    int len;

public:
    String()
    {
        str = new char[20];
        len = 0;
    }
    String(char *s)
    {
        str = s;
    }
    void length()
    {
        int i = 0;
        while (str[i] != '\0')
        {
            i++;
        }
        len = i;
        cout << "\nLength of " << str << " is: " << len;
    }
    String operator+(String ob)
    {
        int i = 0, j = 0;
        String t;
        t.str=new char[30];
        while (str[i] != '\0')
        {
            t.str[i]=str[i];
            i++;
        }
        while (ob.str[j] != '\0')
        {
            t.str[i]= ob.str[j];
            i++;
            j++;
        }
        return (t);
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


    return 0;
}
// END OF LINE