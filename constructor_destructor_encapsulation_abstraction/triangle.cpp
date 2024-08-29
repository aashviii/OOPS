#include<iostream>
using namespace std;
class triangle
{
	private:
		int length;
		int side1,side2,side3;
	public:
//		equilateral, isosceles, or scalene.
		void equilateral(int side1, int side2, int side3)
		{
			if(side1 == side2 == side3)
			{
				cout<<"EQUILATERAL TRIANGLE";
			}
		}
		void scalene(int side1, int side2, int side3)
		{
			if(side1 != side2 != side3)
			{
				cout<<"SCALENE TRIANGLE";
			}
		}
		void isosceles(int side1, int side2, int side3)
		{
			if(side1 == side2 != side3 || side1 != side2 == side3)
			{
				cout<<"ISOSCELES TRIANGLE";
			}
		}
};
int main()
{
	int x,y,z;
	cout<<"Enter side 1: ";
	cin>>x;
	cout<<"Enter side 2: ";
	cin>>y;
	cout<<"Enter side 3: ";
	cin>>z;
	triangle t1;
	t1.equilateral(x,y,z);
	t1.scalene(x,y,z);
	t1.isosceles(x,y,z);
	return 0;
}
