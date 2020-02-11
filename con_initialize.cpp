#include<iostream>
using namespace std;

class delta
{
 int a;
 float b;
 double c;
 public:
 	//one way of initializing :
 	
/*
 	delta()
 	{
 	 a=1;
 	 b=2;
 	 c=3;
 	}
*/
 	
 	//way two of initializing :
 	delta() : a(1),b(2),c(3)
 	{
 	 //if done like above then no need to initialize here
 	}
 	
 	void print()
 	{
 	 cout<<a<<" "<<b<<" "<<c<<" "<<"\n";
 	} 
 	
};


int main()
{
 delta d;
 d.print();
}
