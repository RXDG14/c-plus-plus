#include<iostream>
#include<vector>
using namespace std;

int main()
{
 int n,input;
 vector <int> arr;   				//create an array of type int named arr
/* cout<<"enter the array size : ";
 cin>>n;
 cout<<"enter the array elements : ";
 for(int i=0;i<n;i++)
 	{
 	 cin>>input;
 	 arr.push_back(input);  //push input to the back of the array
 	}
 cout<<"\n";	
 cout<<"array elements are: ";
 for(int i : arr)    // for i from start to end of the array
 	{
 	 cout<<i<<" ";
 	}
 cout<<"\n";
 cout<<"length of array : "<<arr.size()<<"\n";
 cout<<"capacity of the array : "<<arr.capacity()<<"\n";
 arr.resize(3); 	//resize the array
 for (int i : arr)
        cout << i << ' '; 
 cout<<"\n";
 cout<<"now creating an array of size 5 with all elements as 10 : "<<"\n";
 arr.assign(5,10); 		//array of size 5 with all elements as value 10
 for(int i : arr)
 	cout<<i<<' '<<'\n';
 */
 cout<<"enter the array size : ";
 cin>>n;
 cout<<"enter the array elements : ";
 for(int i=0;i<n;i++)
 	{
 	 cin>>input;
 	 arr.push_back(input);  //push input to the back of the array
 	}
 cout<<'\n';
 cout<<"how many elements to enter to the start of the array ? : "<<'\n';
 int start,elements;
 cin>>start;
 cout<<"enter them : "<<'\n';
 for(int j=0;j<start;j++)
 {
  cin>>elements;
  arr.insert(arr.begin(),elements);   //to put elements to the start of the array it acts as a stack so put it stack way
 }
// arr.insert(arr.begin() , 1);
 for(int i : arr)
 	{cout<<i<<' ';}
 cout<<'\n';
 /* to use swap in vector 
 make arr and arr1 two arrays
 then
 
 arr.swap(arr1)

 this swaps the two arrays
 */
 return 0;		
}
