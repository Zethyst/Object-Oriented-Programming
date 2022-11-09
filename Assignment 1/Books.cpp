#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

class book
{
private:
    char *author, *title;
    float *price;
    int *stock;

public:
    book()
    {
        author = new char[20];
        title = new char[20];
        price = new float;
        stock = new int;
    }
    void feeddata();
    void editdata();
    void showdata();
    int search(char[]);
    void buybook();
};

void book::feeddata()
{
    cin.ignore();
    cout << "Enter Title Name: ";
    cin.getline(title, 20);
    cout << "\nEnter Author Name: ";
    cin.getline(author, 20);
    cout << "Enter Price: ";
    cin >> *price;
    cout << "Enter Stock Position: ";
    cin >> *stock;
}

void book::showdata()
{
    cout << "\nTitle Name: " << title;
    cout << "\nAuthor Name: " << author;
    cout << "\nPrice: " << *price;
    cout << "\nStock Position: " << *stock;
}

int book::search(char tbuy[20])
{
    if (strcmp(tbuy, title) == 0)
        return 1;
    else
        return 0;
}

void book::buybook()
{
    int copies;
    cout << "\nEnter Number Of Books to buy: ";
    cin >> copies;
    if (copies <= *stock)
    {
        *stock = *stock - copies;
        cout << "\nBooks Bought Sucessfully!";
        cout << "\nAmount: Rs. " << (*price) * copies;
    }
    else
        cout << "\nRequired Copies not in Stock";
}

int main()
{
    book *B[20];
    int i = 0, r, t, choice;
    char titlebuy[20], authorbuy[20];
    while (1)
    {
        cout << "\n\n-------------MENU-------------"
             << "\n1. Entry of New Book"
             << "\n2. Buy Book"
             << "\n3. Search For Book"
             << "\n4. Edit Details Of Book"
             << "\n5. Exit"
             << "\n\nEnter your Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            B[i] = new book;
            B[i]->feeddata();
            i++;
            break;

        case 2:
            cin.ignore();
            cout << "\nEnter Title Of Book: ";
            cin.getline(titlebuy, 20);
            for (t = 0; t < i; t++)
            {
                if (B[t]->search(titlebuy))
                {
                    B[t]->buybook();
                    break;
                }
            }
            if (t == 1)
                cout << "\nThis Book is Not in Stock";

            break;
        case 3:
            cin.ignore();
            cout << "\nEnter Title Of Book: ";
            cin.getline(titlebuy, 20);

            for (t = 0; t < i; t++)
            {
                if (B[t]->search(titlebuy))
                {
                    cout << "\nBook Found Successfully!";
                    B[t]->showdata();
                    break;
                }
            }
            if (t == i)
                cout << "\nThis Book is Not in Stock";
            break;
        case 5:
            exit(0);
        default:
            cout << "\nInvalid Choice Entered";
        }
    }

    return 0;
}