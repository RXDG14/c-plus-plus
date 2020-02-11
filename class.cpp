#include<iostream>
using namespace std;

class student
{
 int roll;
 int marks;
 public:
 	void enter(int rroll,int mmarks)
 	{
 	 roll=rroll;
 	 marks=mmarks; 	 
 	}
 	void print()
 	{
 	 cout<<" "<<roll<<" "<<marks<<"\n";
 	}
};

int main()
{
 student s;
 s.enter(11,100);
 s.print();
 cout<<"\n";
 return 0;
}
