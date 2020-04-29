//pair (data_type1, data_type2) Pair_name;
#include<iostream>
#include<utility>
using namespace std;

int main()
{
	pair<int,char>a;
	a.first=100;
	a.second='A';
	cout<<a.first<<" "<<a.second<<"\n";
	pair<int,char>b(101,'B');			//another way(directly initialize)
	cout<<b.first<<" "<<b.second<<"\n";
	a.swap(b);
	cout<<a.first<<" "<<b.first<<"\n";
}
