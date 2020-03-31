#include<iostream>
using namespace std;


template <typename T>		//declaring template
T &min(T &x,T &y)
{
	return (x<y)?x:y;
}

int main()
{
 int i=min(1,3);	//other way is cout<<min<int>(1,3) then you dont have to pass by ref in template
 cout<<i<<"\n";		//if u put any other type value except int then it will give error
}


/*using templates in classes
template<class t> class base
{
 public:
 	t add(t x,t y);
	t mul(t x,t y);
};
template <class t> t base <t>::add(t x,t y)
{
 return x+y;
}
template<class t> t base <t>::mul(t x,t y)
{
 return x*y;
}

class base
{
 public:
 	void add(int x,int y);
	void mul(int x,int y);
};
*/









