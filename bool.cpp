#include<iostream>
using namespace std;

bool wtf(int a)
{
 if(a==69)
 	return true;
 else
 	return false;
}


int main()
{
 int a;
 cin>>a;			//enter 69
 if(wtf(a) == true)
 	cout<<"you entered 69 \n";
 else
 	cout<<"you did't enter 69 \n";
}
