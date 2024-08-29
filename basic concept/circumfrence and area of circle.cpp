#include<iostream>
using namespace std;

class circle
{
	private:
	float pi;
	float are,circum;
	float r;
	public:
	void setter(int i)
	{
			r=i;
	}
	
	int area()
	{
		are = 3.14*r*r;
		return are;
	}
		
	int cicumference()
	{
		circum = 2*3.14*r;
		return circum;
	
	}	
};

int main()
{
	circle c1;
	int i;
	float area,circum;
	cout<<"Enter radius of the circle: ";
	cin>>i;
	c1.setter(i);
	area = c1.area();
	circum = c1.cicumference();
	cout<<"Area of circle is "<<area;
	cout<<"\nCircumference of circle is "<<circum;
	return 0;
}
