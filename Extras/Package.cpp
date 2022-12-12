// PROGRAMMED BY AKSHAT JAISWAL
#include <iostream>
using namespace std;
class Parcel
{
private:
    double weight;

protected:
    double shipping_cost;

public:
    Parcel()
    {
        weight = 0;
        shipping_cost = 0.0;
    }
    Parcel(double w)
    {
        this->weight = w;
    }
   public: virtual void Call_Shipping()
    {
        shipping_cost = 10 * weight;
    }
    void display()
    {
        cout << "\nThe Shipping Cost: " << shipping_cost << endl;
    }
};
class Box : public Parcel
{
private:
    double height, weight, depth;

public:
    Box()
    {
        height = weight = depth = 0.0;
    }
    Box(double h, double w, double d)
    {
        this->height = h;
        this->weight = w;
        this->depth = d;
    }
     void Call_Shipping()
    {
        Parcel::Call_Shipping();
        double volume;
        cout << "\nCost: " << shipping_cost;
        volume = height * weight * depth;
        if (volume > 3)
        {
            shipping_cost += 30;
        }
    }
};
int main(void)
{
    Parcel ob(4.3),*ptr;
    // ob.Call_Shipping();
    // ob.display();

    ptr=&ob;
    ptr->Call_Shipping();
    ptr->display();
    Box bo(2, 4, 6);
    // bo.Call_Shipping();
    // bo.display();
    ptr=&bo;
    ptr->Call_Shipping();
    ptr->display();
    return 0;
}
// END OF LINE