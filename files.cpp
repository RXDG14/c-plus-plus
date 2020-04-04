#include<fstream>
#include<iostream>
#include<string>
using namespace std;


// /* ************to create a file and input something in it*********************
int main()
{
 ofstream f("sample.txt");		//create the output file
 if(!f)	//if the file could not be made/created
 	{
	 cout<<"error file cannot be created ";
	 return 1;
	}
 //wtf do i do here??????????????????????????
 string x="yes";
 while(x=="yes")
 	{
	 getline(cin,x);
	 cin>>x;
	 f<<x<<"\n";
	 cout<<"more input???? : ";
	 cin>>x;
	}
 //f<<x<<" ";	
 f<<"this is line 1 "<<'\n';		//written to file
 f<<"this is line 2 "<<"\n";		//written to file
 return 0;
}
// ******************************************************************************/


/*************to read a file and give as output*******************************
int main()
{
 ifstream file{"sample.txt"};
 if(!file)		//if the file could not be found
	{
	 cout<<"error the file could not be found ";
	 return 1;
	}
 while(file)	//while till the file doesnt end
 	{
	 string x;
     getline(file,x);	 //if used -> file>>x; then it would \n after every word not line
	 cout<<x<<"\n";
	}
 return 0;	
}
*****************************************************************************/










