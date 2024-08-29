
#include<iostream>
using namespace std;
class person
{
	private:
		int age;
		string name;
		string country;
		
	public:
		void setName(const std::string & n) 
		{ 
      		name = n;
      	}
		
		void setAge(int a) 
		{ 
      		age = a;
		}
		
		void setCountry(const std::string & c) 
		{
      		country = c;
		}
		
		string getName() 
		{
      		return name;
		}

    	int getAge() 
		{ 
      		return age;
    	}

    	string getCountry()
		{ 
      		return country;
  		}
};
int main()
{
	person p1;
	 p1.setName("Saveli Sujatha"); 
  p1.setAge(25); 
  p1.setCountry("USA"); 
  cout << "Name: " << p1.getName() <<endl;
  cout << "Age: " << p1.getAge() << endl; 
  cout << "Country: " << p1.getCountry() << endl;

}

