#include<iostream>
#include<algorithm>
#include<iterator>
using namespace std;


int main()
{
 int arr[5];
 cout<<"enter the array elements: ";
 for(int i=0;i<5;i++)
 	{
 	 cin>>arr[i];
 	}
 
 sort(begin(arr),end(arr));               //sorting from beginning to the end of the array
 
 cout<<"the sorted array : ";
 for(int i=0;i<5;i++)
 	{
 	 cout<<arr[i]<<" ";
 	}
}
