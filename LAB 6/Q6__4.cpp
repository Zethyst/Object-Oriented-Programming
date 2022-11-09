#include <iostream>
using namespace std;

class Student
{
protected:
	char name[100];
	int roll;
	Student()
	{
		cout << "Enter Name: ";
		cin.getline(name, 100);
		cout << "Enter Roll No: ";
		cin >> roll;
	}
};
class Sports : virtual public Student
{
protected:
	int s_grade;
	Sports()
	{
		cout << "Enter Sports Marks: ";
		cin >> s_grade;
	}
};

class Exam : virtual public Student
{
protected:
	int e_grade;
	Exam()
	{
		cout << "Enter Exam Marks: ";
		cin >> e_grade;
	}
};

class Result : public Sports, public Exam
{
private:
	char r[2];

public:
	Result()
	{
		if (s_grade >= 30)
			r[0] = 'P';
		else
			r[0] = 'F';
		if (e_grade >= 30)
			r[1] = 'P';
		else
			r[1] = 'F';
	}
	void display()
	{
		cout<<"\n\nTHE DETAILS\n";
		cout << "Name: " << name << endl;
		cout << "Roll no: " << roll << endl;
		cout << "Sports grade: " << r[0] << endl;
		cout << "Exam grade: " << r[1] << endl;
	}
};

int main()
{
	Result r1;
	r1.display();
	return 0;
}
