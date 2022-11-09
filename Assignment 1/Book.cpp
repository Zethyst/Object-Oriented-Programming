#include <iostream>
#include <string.h>
using namespace std;
class BOOK
{
public:
    char title[100][100],authorname[100][100];
    // string title[100], authorname[100];
    int price[100], n_copies[100], n;

public:
    void details()
    {
        title[][] = "Atomic Habits";
        authorname[0] = "James Clear";
        price[0] = 173;
        n_copies[0] = 20;
        title[1] = "Harry Potter";
        authorname[1] = "J.K.Rowling";
        price[1] = 421;
        n_copies[1] = 34;
        title[2] = "Book Thief";
        authorname[2] = "Markus Zusak";
        price[2] = 238;
        n_copies[2] = 15;
        title[3] = "Goosebumps";
        authorname[3] = "R.L. Stine";
        price[3] = 245;
        n_copies[3] = 25;
        title[4] = "To kill a Mocking Bird";
        authorname[4] = "Harper Lee";
        price[4] = 99;
        n_copies[4] = 9;
        title[5] = "IT";
        authorname[5] = "Stephen King";
        price[5] = 320;
        n_copies[5] = 17;
    }
    void display(int x)
    {
        cout << "Title\t"
             << "Author Name\t"
             << "Price\t"
             << "Copies Available\n";

        cout << title[x] << "\t" << authorname[x] << "\t" << price[x] << "\t" << n_copies[x] << endl;
    }
    void check()
    {
        char str[100];
        cout << "Enter the Book you want to buy: ";
        cin>>str;
        for (int i = 0; i <= 5; i++)
        {
            if (strcmp(str,title))
            {
                cout << "\nBook Available";
            cout << "Title\t"
             << "Author Name\t"
             << "Price\t"
             << "Copies Available\n";
                cout << title[i] << "\t" << authorname[i] << "\t" << price[i] << "\t" << n_copies[i] << endl;
                // bill(i);
            }
            // else{
            //     cout << "Sorry! Book Not Available :(";
            //     break;
            // }
        }
        
    }
    void bill()
    {
        check();
        int x;
        cout << "\nHow many copies you want to purchase? ";
        cin >> n;
        cout << "\nBook\tPrice\tNo. of Copies ordered\n";
        cout << title[x] << "\t" << price[x] << "\t" << n << endl;
        cout << "Your Bill: " << price[x] * n;
        n_copies[x] -= n;
    }
};
int main(void)
{
    BOOK ob;
    int ch;
    while (1)
    {
        cout << "------------MENU------------" << endl;
        cout << "Press 1 to find a Book to buy\nPress 2 to calculate the bill\nPress 4 to Exit\nEnter your choice: ";
        cin >> ch;
        switch (ch)
        {
            case 1:
            ob.check();
            break;
            case 2:
            ob.bill();
        }
            return 0;
    }
}