#include<iostream>
using namespace std;

class calculator
{
	private:
		int num1;
		int num2;
		int sum;
	public:
	int setter(int n1,int n2)
	{
		num1=n1;
		num2=n2;
	}
	int getter()
	{
		sum=num1+num2;
		return sum;
	}
};

class subtract
{
	private:
		int num1;
		int num2;
		int sum;
	public:
	int setter(int n1,int n2)
	{
		num1=n1;
		num2=n2;
	}
	int getter()
	{
		sum=num1-num2;
		return sum;
	}
};

class multiply
{
	private:
		int num1;
		int num2;
		int sum;
	public:
	int setter(int n1,int n2)
	{
		num1=n1;
		num2=n2;
	}
	int getter()
	{
		sum=num1*num2;
		return sum;
	}
};

class divide
{
	private:
		int num1;
		int num2;
		int sum;
	public:
	int setter(int n1,int n2)
	{
		num1=n1;
		num2=n2;
	}
	int getter()
	{
		sum=num1/num2;
		return sum;
	}
};

int main()
{
	calculator c1;
	subtract s1;
	multiply m1;
	divide d1;
	int i,j;
	int ans,sub,div,mul;
	cout<<"Enter first number: ";
	cin>>i;
	cout<<"Enter second number: ";
	cin>>j;
	c1.setter(i,j);
	s1.setter(i,j);
	m1.setter(i,j);
	d1.setter(i,j);
	ans = c1.getter();
	sub = s1.getter();
	mul = m1.getter();
	div = d1.getter();
	cout<<"Addition of the digits is "<<ans<<endl;
	cout<<"Subtraction of the digits is "<<sub<<endl;
	cout<<"Multiplication of the digits is "<<mul<<endl;
	cout<<"Division of the digits is "<<div<<endl;
	return 0;
}
