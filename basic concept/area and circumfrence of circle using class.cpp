#include<iostream>
using namespace std;

class circle
{
	private:
		float pi=3.14;
		float circum,r;
		float are;
	public:
		void setter(int i)
		{
			r = i;
		}
	    int area()
	    {
		  are = pi*r*r;
		  return are;
		}
		int circumference()
		{
			circum = 2 *pi* r;
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
	circum = c1.circumference();
	cout<<"Area of circle is "<<area;
	cout<<"\nCircumference of circle is "<<circum;
	return 0;
}
