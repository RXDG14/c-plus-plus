#include<iostream>
using namespace std;

int main()
{
 int x{09};         //cant print "09" because its an octal constant. you can print 9 though
 cout<<x<<'\n'; 
 return 0;
}
