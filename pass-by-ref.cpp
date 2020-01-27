#include<iostream>
using namespace std;

 void change(int &n)           //call by reference changes the original value but call by value doesn't
 { 
  n=n+1;
 }

 int main()
 {
  int n;
  cout<<"enter n : ";
  cin>>n;
  cout<<"value of n before : "<<n<<"\n";
  change(n);
  cout<<"value of n after : "<<n<<"\n";
  return 0;
 }
