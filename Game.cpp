// PROGRAMMED BY AKSHAT JAISWAL
#include <iostream>
using namespace std;
class Shape
{
protected:
    int x, y;

public:
    Shape()
    {
        x = y = 0;
    }
    virtual void move(int a, int b) = 0;
    virtual void draw() = 0;
    virtual void setting(int a, int b, string c) = 0;
};
class ComplexShape : public Shape
{
public:
    void move(int a, int b)
    {
        this->x = a;
        this->y = b;
    }
    void setDirection(int a)
    {
        this->x = this->x + a;
        this->y = this->y + a;
    }
};
class SimpleShape : public Shape
{
protected:
    int posx, posy;
    string color;

public:
    void setting(int x, int y, string c)
    {
        posx = x;
        posy = y;
        color = c;
    }
    void draw() = 0;
};
class Box : public SimpleShape
{
    void move(int a, int b)
    {
        this->x = a;
        this->y = b;
        cout << "\nPosition: (" << x << "," << y << ")" << endl;
    }
    void draw()
    {
        cout << endl;
        cout << "\nPosition: (" << posx << "," << posy << ")\n"
             << endl;
        if (posx > 0 && posy > 0)
        {
            for (int i = posy; i > 0; i--)
            {
                for (int j = posx; j > 0; j--)
                {
                    cout << "*";
                }
                cout << endl;
            }
        }
        else
        {
            for (int i = posy; i < 0; i++)
            {
                for (int j = posx; j < 0; j++)
                {
                    cout << "*";
                }
                cout << endl;
            }
        }
        cout << "\nColour of the shape is " << color << endl;
    }
};
class Tent : public SimpleShape
{
    void move(int a, int b)
    {
        this->x = a;
        this->y = b;
        cout << "\nPosition: (" << x << "," << y << ")" << endl;
    }
    void draw()
    {
        cout << endl;
        cout << "\nPosition: (" << posx << "," << posy << ")\n"
             << endl;
        cout << endl;
        if (posx > 0 && posy > 0)
        {
            for (int i = posy; i > 0; i--)
            {
                for (int j = i; j <= posx; j++)
                {
                    cout << "*";
                }
                cout << endl;
            }
      
        }
        else
        {
            for (int i = posy; i <= 0; i++)
            {
                for (int j = i; j >= posx; j--)
                {
                    cout << "*";
                }
                cout << endl;
            }
        }
        cout << "\nColour of the shape is " << color << endl;
    }
};
int main(void)
{
    Shape *ptr;
    Box b;
    Tent t;
    
    int ch, x = 0, y = 0;
    string color;
Menu:
    cout << "\nWhat Shape You Want?" << endl;
    cout << "1. Box" << endl;
    cout << "2. Triangle" << endl;
    cout << "3. Exit" << endl;
    cout << "Enter your choice: ";
    cin >> ch;
    if (ch == 1)
    {
        while (1)
        {

            cout << "\n---------MENU----------" << endl;
            ptr = &b;
            cout << "\n 1. Design Shape" << endl;
            cout << "\n 2. Draw the Shape" << endl;
            cout << "\n 3. Tell the current position" << endl;
            cout << "\n 4. Back" << endl;
            cout << "\nEnter your choice: ";
            cin >> ch;
            if (ch == 1)
            {
                cout << "\nEnter the Cordinates: " << endl;
                cout << "\nHorizontal: ";
                cin >> x;
                cout << "\nVertical: ";
                cin >> y;
                cout << "\nEnter color: ";
                cin >> color;
                ptr->setting(x, y, color);
                
            }
            if (ch == 2)
            {
                ptr->draw();
            }
            if (ch == 3)
            {
                if (x != 0 && y != 0)
                {
                    ptr->move(x, y);
                }
                else
                    cout << "\nShape not designed yet!\n";
            }
            if (ch == 4)
            {
                goto Menu;
            }
        }
    }
    else if (ch == 2)
    {
        while (1)
        {
            ptr = &t;
            cout << "\n 1. Design Shape" << endl;
            cout << "\n 2. Draw the Shape" << endl;
            cout << "\n 3. Tell the current position" << endl;
            cout << "\n 4. Back" << endl;
            cout << "\nEnter your choice: ";
            cin >> ch;
            if (ch == 1)
            {
                cout << "\nEnter the Cordinates: " << endl;
                cout << "\nHorizontal: ";
                cin >> x;
                cout << "\nVertical: ";
                cin >> y;
                cout << "\nEnter color: ";
                cin >> color;
                ptr->setting(x, y, color);
            }
            if (ch == 2)
            {
                ptr->draw();
            }
            if (ch == 3)
            {
                if (x != 0 && y != 0)
                {
                    ptr->move(x, y);
                }
                else
                    cout << "\nShape not designed yet!\n";
            }
            if (ch == 4)
            {
                goto Menu;
            }
        }
    }
    else if (ch==3)
    {
        exit(0);
    }
    
    else
    {
        cout << "\nWrong Choice!" << endl;
        goto Menu;
    }

    return 0;
}
// END OF LINE