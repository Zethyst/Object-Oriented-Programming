#include <iostream>
using namespace std;
class Box

{

               int capacity;

    public:

               Box(){}

               Box(double capacity)

{             

  this->capacity = capacity;

   }
    bool operator < (Box ob)
    {
        if (capacity<ob.capacity)
        {
            return true;
        }
        else
        return false;
    }

};
 int main()

{

               Box b1(10);

               Box b2 = Box(14);

               if(b1 < b2){

                              cout<<"Box 2 has large capacity.";

               }

               else{

                              cout<<"Box 1 has large capacity.";

               }

               return 0;

}