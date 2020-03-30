#include<bits/stdc++.h>
using namespace std;

class parent
{
 //make either public or protected to access a.
 public: //if this ain't public then there is no other way to access 'a' from this class other than using friend or 'protected'
 	int a;
};


class child : public parent
{
 int c;		//c made private here so to access this gotta make a function
 public:
 	int b;
	void access_c(int x);
};


void child::access_c(int x) 	//function to access c
{
 c=x;
 cout<<c<<'\n';
}

int main()
{
 child ch;
 ch.a=1;
 ch.b=2;
 cout<<ch.a<<" "<<ch.b<<" ";
 ch.access_c(3);		//to access c you need to make a function and access it because its private
}
