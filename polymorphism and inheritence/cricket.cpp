#include<iostream>
using namespace std;
class cricketer
{
	public:
		int total_runs;
		int average_runs;
		int best_performance;
		int matches;
		int runs()
		{
			cout<<"Enter total runs: ";
			cin>>total_runs;
			cout<<"Enter best performance of the player: ";
			cin>>best_performance;
			cout<<"Enter number of matches played: ";
			cin>>matches;
		}
	int average()
	{
		average_runs = total_runs / matches;	
	}
	void display()
	{
		cout<<"Average runs of the player: "<<average_runs;
	}
};
class batsman:public cricketer
{
	
};
int main()
{
	batsman b1;
	b1.runs();
	b1.average();
	b1.display();
	return 0;
}
