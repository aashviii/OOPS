#include<iostream>
using namespace std;
class student
{
	public:
		int roll;
		int number()
		{
			cout<<"Enter your roll number: ";
			cin>>roll;
		}
};
class test:public student
{
	public:
		int mark1,mark2;
		int marks()
		{
			cout<<"Enter marks for subject 1: ";
			cin>>mark1;
			cout<<"Enter marks for subject 2: ";
			cin>>mark2;	
		}	
};
class result:public test
{
	public:
		int total;
		void display()
		{
			total = mark1 + mark2;
			cout<<"Total marks = "<<total;
		}
};
int main()
{
	result r1;
	r1.number();
	r1.marks();
	r1.display();
	return 0;
}
