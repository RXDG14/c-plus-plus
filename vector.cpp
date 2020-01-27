#include<iostream>
#include<vector>
using namespace std;

int main()
{
 int n,input;
 vector <int> arr;
 cout<<"enter the array size : ";
 cin>>n;
 cout<<"enter the array elements : ";
 for(int i=0;i<n;i++)
 	{
 	 cin>>input;
 	 arr.push_back(input);
 	}
 cout<<"\n";	
 cout<<"array elements are: ";
 for(int i=0;i<n;i++)
 	{
 	 cout<<arr[i]<<" ";
 	}
 cout<<"\n";
 cout<<"length of array : "<<arr.size()<<"\n";
 cout<<"capacity of the array : "<<arr.capacity()<<"\n";
 cout<<"\n";	
 return 0;		
}
