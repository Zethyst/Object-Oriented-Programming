/* PROGRAMED BY AKSHAT JAISWAL*/

#include <iostream>
using namespace std;
class Player
{
private:
    int num, score;
    string name;

public:
    friend void operator>>(istream &, Player &);
    friend void operator<<(ostream &, Player &);
};
void operator>>(istream &in, Player &ob)
{
    cout << "\nEnter the Name of the Player: ";
    in >> ob.name;
    cout << "\nEnter the Number of the Player: ";
    in >> ob.num;
    cout << "\nEnter the Score of the Player: ";
    in >> ob.score;
}
void operator<<(ostream &out, Player &ob)
{
    cout << "\nTHE DETAILS-->" << endl;
    cout << "\nPlayer Name: ";
    out << ob.name;
    cout << "\nPlayer Number: ";
    out << ob.num;
    cout << "\nPlayer Score: ";
    out << ob.score;
}

int main(void)
{
    Player p;
    cin >> p;
    cout << p;
    return 0;
}
//END OF LINE