#include<iostream>
using namespace std;
class Car
{
	private:
		int year;
		string company;
		string model;
		
		public:
			void setdata(int year,string company,string model)
			{
				this->year = year;
				this->company = company;
				this->model = model;
			}
			void getdata()
			{
				cout<<"\nYear of manufacture:- "<<year;
				cout<<"\nCompany name:- "<<company;
				cout<<"\nCar model:- "<<model;
			}
};
int main()
{
	Car c1;
	int year;
	string model;
	string company;
	cout<<"Enter the year of manufacture of your car: ";
	cin>>year;
	cout<<"Enter company name: ";
	cin>>company;
	cout<<"Enter the model of your car: ";
	cin>>model;
	c1.setdata(year,company,model);
	c1.getdata();
	return 0;
}
