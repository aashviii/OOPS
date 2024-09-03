
#include<iostream>
using namespace std;
template<typename T>
void swapvalues(T &a,T &b)
{
	T temp = a;
	a=b;
	b=temp;
}
int main()
{
	int x,y;
	cout << "Enter the Value of X:- ";
	cin >> x;
	cout << "Enter the Value of Y:- ";
	cin >> y;
	cout << "\n Values Befor Swapping :- " << x;
	cout << "\n Values Befor Swapping :- " << y;
	swapvalues(x,y);
	cout << "\n\n Values After Swapping :- " << x;
	cout << "\n Values After Swapping :- " << y;
	cout << "\n_________________";
	char a = 'O',b = 'U';
	cout << "\n Values Befor Swapping :- " << a;
	cout << "\n Values Befor Swapping :- " << b;
	swapvalues(a,b);
	cout << "\n\n Values After Swapping :- " << a;
	cout << "\n Values After Swapping :- " << b;
	cout << "\n_________________";
	float p = 9.15,q = 15.9;
	cout << "\n Values Befor Swapping :- " << p;
	cout << "\n Values Befor Swapping :- " << q;
	swapvalues(p,q);
	cout << "\n\n Values After Swapping :- " << p;
	cout << "\n Values After Swapping :- " << q;
	return 0;
}

