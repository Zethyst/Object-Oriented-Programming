/*Name: Akshat Jaiswal
  Roll No: 21052646
  Section: CSE 37
  WAP to Create a class which stores a sting and its length as data members. Include all the constructors. Include a member function to join two strings and display the concatenated string. 

  */


#include <iostream>
#include <string.h>
using namespace std;
class Sentence
{
private:
    char *str;
    int len;

public:
    Sentence()
    {
        len = 0;
        str = new char[len + 1];
    }
    Sentence(char *s)
    {
        len = strlen(s);
        str = new char[len + 1];
        strcpy(str, s);
    }
    Sentence(Sentence &ob3)
    {
        len = ob3.len;
        str = ob3.str;
    }
    void compute(Sentence ob1, Sentence ob2, Sentence ob3)
    {
        len = ob1.len + ob2.len, ob3.len;
        str = new char[len + 1];
        strcpy(str, ob1.str);
        strcat(str, ob2.str);
        strcat(str, ob3.str);
        cout << "The Concatenated String: " << str;
    }
};
int main(void)
{
    Sentence x1;
    Sentence x2("Ed ");
    Sentence x3(x2);
    Sentence x4("Eddy");

    Sentence x5;
    x4.compute(x2, x3, x4);

    return 0;
}