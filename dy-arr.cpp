#include<iostream>
using namespace std;

int main()
{
 int n;
 cout<<"enter the array size : ";
 cin>>n;
 int *arr = new int[n];               //creates an array of size n at users request(at run time)(not predefined array size)
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
 delete [] arr;                   //you will have to delete otherwise memory leak happens
 return 0;	                      //memory leaks means the compiler and the os forgets the address of your variables
}								  //and they eat up the free memory space with no way to acess and delete them	

😎️
