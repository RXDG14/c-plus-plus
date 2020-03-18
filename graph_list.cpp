#include<bits/stdc++.h>
using namespace std;


void addEdge(vector<int> arr[], int u, int v) 
{ 
    arr[u].push_back(v); //put element in that vertices's list
   // adj[v].push_back(u); for undirected but gotta make changes other places too 
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

/*
this still incomplete though like:

1)u can put any number of input edges inside a list even if they(vertices) dont exist
*/
