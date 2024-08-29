#include<iostream>
using namespace std;

inline int cube(int s) {return s*s*s;}
inline int multiply(int s,int k) {return s*k;}
int main()
{
	int i,j;
	cout<<"Enter two values: ";
	cin>>i>>j;
	cout << "The cube of the number is: " << cube(i)<<endl;
	cout << "The cube of other number is: " << cube(j)<<endl;
	cout << "Multiplication values of the number are: " << multiply(i,j);
	return 0;
}
