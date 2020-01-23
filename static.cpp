#include<iostream>
using namespace std;


void sss()
{
 static int x{2};    //if you dont put static here then output be 3 3 3.....if static then output-> 3 4 5 
 ++x;				 //if you leave the scope then if static then the value stays same and doesn't reset
 cout<<x<<'\n';
}


int main()
{
 sss();
 sss();
 sss();
}
