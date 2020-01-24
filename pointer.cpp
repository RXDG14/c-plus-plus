#include<iostream>
using namespace std;

int main()
{
 int p=10;
 int *ptr=&p;
 cout<<p<<"\n";      //gives the value of p
 cout<<*ptr<<"\n";   //gives the value of ptr
 cout<<&p<<"\n";     //gives the address of the ptr
}
