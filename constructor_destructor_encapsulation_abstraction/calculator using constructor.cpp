#include<iostream>
using namespace std;
class calculator
{
	public:
		int add,sub,mul,div;
	calculator(int x,int y)
	{
		 add = x + y;
		 sub = x - y;
		 mul = x * y;
		 div = x / y;
	}
	void display()
	{
		cout<<"Addition is "<<add<<endl;
		cout<<"subtraction is "<<sub<<endl;
		cout<<"Multiplication is "<<mul<<endl;
		cout<<"division is "<<div<<endl;
	}	
};
int main()
{
	int i,j;
	cout<<"Enter first number: ";
	cin>>i;
	cout<<"Enter second number: ";
	cin>>j;
	calculator c1(i,j);
	c1.display();
	return 0;
}
