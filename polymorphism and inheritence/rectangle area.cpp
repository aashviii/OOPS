#include<iostream>
using namespace std;
class rectangle
{
	public:
		int len,bread,are;
		int area()
		{
			cout<<"Enter length: ";
			cin>>len;
			cout<<"Enter breadth: ";
			cin>>bread;
			are = len * bread;
		}
		
};
class ara:public rectangle
{
	public:
	void display()
	{
		cout<<"Area of rectangle = "<<are;
	}
	
};
int main()
{
	ara a1;
	a1.area();
	a1.display();
	return 0;
}
