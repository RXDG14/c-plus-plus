#include<iostream>
using namespace std;

class student
{
	int x;
	int y;
	public:
		void marks(int a,int b)
			{
				x=a;
				y=b;
			}
		friend void add(student s);
};

void add(student s)
{
 cout<<s.x<<s.y<<"\n";
}

int main()
{
	student s;
	s.marks(2,3);
	add(s);
	return 0;
}
