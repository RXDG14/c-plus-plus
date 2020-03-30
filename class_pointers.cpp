//basic class pointers (very basic)
#include<iostream>
using namespace std;


class stonks
{
 int a;
 int b;
 int c;
 public:
 	stonks(int x,int y,int z)
		{
		 a=x;
		 b=y;
		 c=z;
		}
	/*void insert(int x,int y,int z)  using non-constructor way - extra time and extra line of code
	{
	 a=x;
	 b=y;
	 c=z;
	}*/

	int output()
		{
	 	 return a;
		}
};


int main()
{
 stonks obj(6,7,8);
 //obj.insert(6,7,8);	non constructor way
 stonks *p=&obj;		//class pointer
 int answer = p->output();
 cout<<"a is : "<<answer;
}
