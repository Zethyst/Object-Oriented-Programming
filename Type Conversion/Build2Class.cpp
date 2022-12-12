// PROGRAMMED BY AKSHAT JAISWAL
#include <iostream>
using namespace std;
class Zethyst
{
private:
    int i, j;

public:
    Zethyst()
    {
        i = j = 0;
    }
    Zethyst(int p)
    {
        i = p;
        j = p + 5;
    }
    void operator=(int k)
    {
        i = i + k;
        j = j + k;
    }
    void display()
    {
        cout << "\ni: " << i << endl
             << "j: " << j << endl;
    }
};
int main(void)
{
    Zethyst ob(1);
    ob = 20;
    ob.display();
    return 0;
}
// END OF LINE