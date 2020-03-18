#include<bits/stdc++.h>
using namespace std;


void addEdge(vector<int> arr[], int u, int v) 
{ 
    arr[u].push_back(v); //put element in that vertices's list
   // adj[v].push_back(u); for undirected but gotta make changes other places too 
} 

//this doesnt work yet. will look through later. this was implemented to check if entered edge is present in verticesvalues or not
int check(int inputlinks,int j,int v,vector<int>arr1,vector<int>arr[]) //j is vertice number . v is number of vertices
{
  for(auto k : arr1)
	{
	 if(arr1[k]==inputlinks) //check if that vertice is present or not in vertices array arr1
	   {	 
		 addEdge(arr,j,inputlinks);//j sent bcoz thats the vertice number
		 //break;
	   }  
	// else
	  //  {   
		// cout<<"error wrong input ";
	//	}  
	}
}


void printGraph(vector<int> arr[], int V) 
{ 
    for (int v = 0; v < V; ++v)   //first vector element 
    { 
        cout << "\n Adjacency list of vertex "<<v+1<<"\nHead "; 
        for (auto x : arr[v]) //inside the first first vector element list
          {
		  	cout << "-> " << x;  
		  } 
        cout<<'\n'; 
    } 
} 

void add(vector<int>arr[],int v)
{
 for(int j=0;j<v;j++)
  {
    int links;
 	cout<<"how many edges linked : ";
 	cin>>links;  //how many edges does this vertice have?
	cout<<"enter them : ";
 	for(int i=0;i<links;i++)
 	 {	
	   int inputlinks;
	   cin>>inputlinks;  //vertices linked u input
	   addEdge(arr,j,inputlinks); //j sent bcoz thats the vertice number
	 }
  }
}

int main() 
{ 
    int v;  //vertices
	cout<<"v : ";
	cin>>v;
    vector<int> arr[v];  //vector of 5 lists
	add(arr,v);
    printGraph(arr, v); 
    return 0; 
}
