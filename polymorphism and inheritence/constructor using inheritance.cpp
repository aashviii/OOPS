#include<iostream> 
using namespace std; 

class student 
{ 
	public: 
		student() 
		{ 
			cout << "Class student constructor \n"; 
		} 
}; 

class teacher: public student
{ 
	public: 
		teacher() 
		{ 
			cout << "Class teacher constructor \n"; 
		} 
}; 
 
class principle: public teacher 
{ 
	public: 
		principle() 
		{ 
			cout << "Class principle constructor \n"; 
			
		} 
}; 

// Driver code 
int main() 
{ 
	student obj; 
	return 0; 
}

