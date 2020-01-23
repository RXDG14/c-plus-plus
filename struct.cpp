#include<iostream>
#include<string>
using namespace std;

struct student
{
 int roll;
 string name;
};

int main()
{
 student rakshit;
 cout<<"enter the roll of the student:";
 cin>>rakshit.roll;
 cout<<"enter the full name:";
 getline(cin,rakshit.name);
 cout<<"roll : "<<rakshit.roll<<" and name : "<<rakshit.name<<"\n";
}
