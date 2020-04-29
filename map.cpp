#include<iostream>
#include<iterator>
#include<map>
using namespace std;

int main()
{
	map<int,int>a;
	int input1,input2;
	for(int i=0;i<5;i++){
		cin>>input1>>input2;
		a.insert(pair<int,int>(input1,input2));
	}
	map<int,int>::iterator j;
	for(j=a.begin();j!=a.end();++j){
		cout<<j->first<<" "<<j->second<<" \n";
	}
}
