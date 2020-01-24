#include<iostream>
using namespace std;

int main()
{
 int product[10][10];
 
 for(int i=1;i<10;i++)
 	for(int j=1;j<10;j++)
 		product[i][j]=i*j;
 
 for(int i=1;i<10;i++)
 	{
 	for(int j=1;j<10;j++)
 		cout<<product[i][j]<<" ";
 	cout<<"\n";	
  
    }
 return 0;
}   
