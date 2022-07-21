#include <iostream>
using namespace std;
int main(void)
{
  int n,max;
  cout << "Enter the number of students: " << endl;
  cin >> n;

  struct student
  {
    char name[50];
    int roll;
    int mark;
  };

  struct student s[n];
  for (int  i = 0; i < n; i++)
  {
  cout << "Enter your name: ";
  cin >> s[i].name;
  cout << "Enter your roll no: ";
  cin >> s[i].roll;
  cout<< "Enter your marks: ";
  cin>> s[i].mark;
  
}
  cout<<"The number of students is "<<n<<endl;
 cout << "Name "  << "\t";
  cout << "Roll No"<<"\t";
  cout << "Mark" << endl;

  for (int  i = 0; i < n; i++)
  {
 cout << s[i].name <<"\t";
 cout << s[i].roll <<"\t" ;
 cout << s[i].mark << endl;

 		if (s[i].mark > max)
			max = s[i].mark;
 }
 cout<<"\nThe Highest Mark: "<< max;
}