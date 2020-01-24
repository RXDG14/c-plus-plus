#include<iostream>
using namespace std;

int main()
{
 int n;
 cout<<"enter the array size : ";
 cin>>n;
 int arr[n];                           //creates an array of size n at users request(at run time)(not predefined array size)
 cout<<"enter the array elements: ";
 for(int i=0;i<n;i++)
 	{
 	 cin>>arr[i];
 	}
 cout<<"array elements are: ";
 for(int i=0;i<n;i++)
 	{
 	 cout<<arr[i]<<" ";
 	}	
 cout<<"\n";                   
 return 0;	                      

😎️
