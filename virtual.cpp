#include<iostream>
using namespace std;

class base
{
 public:
 	virtual void f1(){cout<<" base-1 ";}		//declared as virtual
	void f2(){cout<<" base-2 ";}
};


class derived : public base
{
 public:
	 void f1(){cout<<" derived-1 ";}		//this is in output bcoz of virtual fn above
	 void f2(){cout<<" derived-2 ";}		//wont print this if virtual is declared here rather than in base class
};

int main()
{
 base *p;		//make a base class pointer 
 derived obj;	//make a derived class object
 p=&obj;		//link base pointer and derived class object
 p->f1();		//currently the pointer is at f1() of base class
 p->f2();		//pointer at f2() of base class
}
