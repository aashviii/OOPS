#include<iostream>
using namespace std;
class person
{
	
	public:
		string name;
	int age;
		int nam()
		{
			cout<<"Enter your name: ";
			cin>>name;
			cout<<"Enter your age: ";
			cin>>age;
		}
};
class student:public person
{
	float percentage;
	public:
	int stud()
	{
		cout<<"Enter your percentage: ";
		cin>>percentage;
	}
	void display()
	{
		cout<<"Name of the student: "<<name<<endl;
		cout<<"Age of the student: "<<age<<endl;
		cout<<"Percentage of the student: "<<percentage<<endl;
	}
};
class teacher:public person
{
	int salary;
	public:
	int sal()
	{
		cout<<"Enter your salary: ";
		cin>>salary;
	}
	void display()
	{
		cout<<"Name of the teacher: "<<name<<endl;
		cout<<"Age of the teacher: "<<age<<endl;
		cout<<"Salary of the teacher: "<<salary<<endl;
	}
};
int main()
{
	student s1;
	teacher t1;
	int choice;
	cout<<"Who are you?"<<endl;
	cout<<"1.Student"<<endl;
	cout<<"2.Teacher"<<endl;
	cin>>choice;
	switch(choice)
	{
		case 1:
			s1.nam();
			s1.stud();
			s1.display();
		break;
		case 2:
			t1.nam();
			t1.sal();
			t1.display();
		break;
		default:
			cout<<"INVALIDE OPTION!!";
	}
	
	return 0;
}
