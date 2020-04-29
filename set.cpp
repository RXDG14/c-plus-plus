#include<iostream>
#include<set>
#include<iterator>
using namespace std;

//everything same for multiset which alllows dublicates

int main()
{
	int input;
	set<int,greater<int>> a;	//greater<int> for descending order
	for(int i=0;i<5;i++){
		cin>>input;
		a.insert(input);	//no dublicates allowed inside the set only one will be accepted
	}
	set<int,greater<int>>::iterator j;
	for(j=a.begin();j!=a.end();++j){
		cout<<*j<<" ";
	}	
}
