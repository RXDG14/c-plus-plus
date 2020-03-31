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
 //if suppose you declare (int a) inside f1 then it wont print derived-1 in output instead it will display base-1
 //to ensure that this doesn't happen put "override" keyword after the derived f1()
 //void f1(int a) override{cout<<" derived-1 ";} this will work if u have put anything inside f1()
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
