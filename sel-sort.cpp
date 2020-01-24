#include<iostream>
#include<algorithm>    //for swap
using namespace std;

int main()
{
 int arr[5],t;
 cout<<"enter the number of array elements : ";
 for(int i=0;i<5;i++)
 	{
 	 cin>>arr[i];
 	}
 for(int i=0;i<5;i++)
 	{
 	 int least = arr[i];
 	 for(int j=i+1;j<5;j++)
 	 	{
 	 	 if(arr[j]<least)     // to find the least number
 	 	 	{
 	 	 	 least=arr[j];
 	 	 	 t=j;             // to store the least number 
 	 	 	}
 	 	 if(least<arr[i])     //swapping
 	 	 	{
 	 	 	 int temp;
             temp=arr[i];
             arr[i]=least;
             arr[t]=temp;
 	 	 	}
 	 	 }
 	}
 for(int k=0;k<5;k++)
 	{
 	 cout<<arr[k]<<" ";
 	}		
 cout<<"\n";	
}

