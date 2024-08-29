#include<iostream>
using namespace std;
class date
{
	private:
		int day,month,year;
	public:
		int setdata(int d,int m,int y)
		{
			day = d;
			month = m;
			year = y;
		}
		int getdata()
		{
			cout<<"Date:- "<<day<<" - "<<month<<" - "<<year;
		}
		int validate()
		{
			if(day<1 || day>31 || month<1 || month>12)
			{
				cout<<"\nInvalide date!!";
			}
		}
		
};
int main()
{
	date d1;
	int d,m,y;
	cout<<"Enter day: ";
	cin>>d;
	cout<<"Enter month: ";
	cin>>m;
	cout<<"Enter year: ";
	cin>>y;
	d1.setdata(d,m,y);
	d1.getdata();
	d1.validate();
	
	return 0;
}
