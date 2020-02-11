#include<iostream>
using namespace std;

class delta
{
 int a;
 int b;
 public:
 	delta() = default ;           //default constructor that does nothing so put all values default as 0
	delta(int value1,int value2)
		{
		 a=value1;
		 b=value2;
		}
	void print()
	{
	 cout<<a<<" "<<b<<"\n"; 
	}	
 	
};



int main()
{
 delta e();
 delta d(7,5);     // cant initialize like  delta d; then d(7,5) cuz u dont have a default constructor in place here 
 d.print();
 cout<<"\n";
 return 0;
}
