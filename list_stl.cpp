//this is STL version of linked lists in cpp

#include<iostream>
#include<iterator>  //this required for are.begin() to arr.end() (for iterating)
#include<list>		//linked list
using namespace std;


/*
this function not yet works but to make it work u will have to adjust positioning and then put elements there
void insert(list<int>ll)
{
 list<int> :: iterator x;
 x=ll.begin();
 ll.insert(x, 2, 7);
}
*/
void show(list<int>ll)
	{
	 list<int>  :: iterator x;
	 for(x=ll.begin(); x!=ll.end(); x++)	//from beginning of list to the end .
	 	{
		 cout<<*x<<" ";			//*x because we are dealing with pointers here in linked list. this isn't an array
		}
	 cout<<'\n';	
	}

int main()
{
 list<int>ll,ll1;  //ll is linked list . we created 2 linked list here ll and ll1
 for(int i=1;i<=10;i++)
 	{
	 ll.push_back(i*2);  //insert at front of ll
	 ll1.push_front(i*2);	//insert at end of ll
	}
 show(ll);
 show(ll1);
 cout<<"now onto insert() "<<'\n';
 insert(ll);
 show(ll);
 int one;
 cout<<"enter 1 to pop from front of ll : ";
 cin>>one;
 ll.pop_front();
 show(ll);
 int two;
 cout<<"enter 1 to pop from back of ll1 : ";
 cin>>two;
 ll1.pop_back();
 show(ll1);
}
