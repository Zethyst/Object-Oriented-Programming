#include <iostream>
using namespace std;

float FUN_AREA(int a){
    float ar = 3.14 * a * a;
    return ar;
}
int FUN_AREA(int a,int b){
    int ar = a * b;
    return ar;
}
int FUN_AREA(int a,int b,int c){
    int ar = a * b * c;
    return ar;
}

void FUN_AREA(){
    cout << "No input " << endl;
}
int main()
{
    int dc;
    int dr1;
    int dr2;
    int dr3;
    int x=0;
    cout << "1 - area of circle \n2. - area of rectangle  \n3. - volume of a box" << endl;
    cout<<"Enter the Shape: ";
    cin>>x;
    if (x==1){
    cout << "Enter the Radius: " << endl;
    cin >> dc;
    cout << "The Area => " <<FUN_AREA(dc)<< endl;
    }
    else if (x==2){
    cout << "Enter the side 1: " << endl;
    cin >> dr1;
    cout << "Enter the side 2: " << endl;
    cin >> dr2;
    cout << "The Area => " <<FUN_AREA(dr1,dr2)<< endl;

    }
    else if (x==3){
    cout << "Enter the side 1: " << endl;
    cin >> dr1;
    cout << "Enter the side 2: " << endl;
    cin >> dr2;
    cout << "Enter the side 3: " << endl;
    cin >> dr3;
    cout << "The Area => " <<FUN_AREA(dr1,dr2,dr3)<< endl;
    }
    return 0;
}