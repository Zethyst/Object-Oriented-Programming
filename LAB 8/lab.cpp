#include <iostream>
using namespace std;
class ABC
{
private:
    int i, j;

public:
    ABC()
    {
        i = j = 0;
    }
    ABC(int i, int j)
    {
        this->i = i;
        this->j = j;
    }
    ABC operator+(int a)
    {   
        ABC t;
        t.i = this->i + a;
        t.j = this->j + a;
        return (t);
    }
    ABC operator + (ABC ob){
        this->i=this->i+ob.i;
        this->j=this->j+ob.j;
    }
    void display()
    {
        cout << "\ni: " << i;
        cout << "\nj: " << j;
    }
};
int main(void)
{
    ABC x1(4, 5);
    ABC x2(7, 8);
    ABC x3;
    cout<<"\nObject 1's Data Members => ";
    x1.display();
    cout<<"\nObject 2's Data Members => ";
    x2.display();
    x3 = x1 + 7;
    cout<<"\nAfter Adding 7 to Object 1 => ";
    x3.display();
    x1+x2;
    cout<<"\nAfter Adding Object 2 to Object 1 => \nObject 1 => ";
    x1.display();
    cout<<"\nObject 2 => ";
    x2.display();

    return 0;
}