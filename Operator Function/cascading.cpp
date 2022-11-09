/* PROGRAMED BY AKSHAT JAISWAL*/

#include <iostream>
using namespace std;
class Cascade
{
private:
    int x;

public:
    Cascade()
    {
        x = 0;
    }
    Cascade(int a)
    {
        this->x = a;
    }
    Cascade operator+(Cascade ob)
    {
        Cascade t;
        t.x = x + ob.x;
        return (t);
    }
    void display()
    {
        cout<<x;
    }
};
int main(void)
{
    Cascade x1(5),x2(5),x3(7);
    Cascade result;
    result = x1 + x2 + x3;
    result.display();

    return 0;
}
//END OF LINE