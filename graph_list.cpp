#include<bits/stdc++.h>
using namespace std;


void addEdge(vector<int> adj[], int u, int v) 
{ 
    adj[u].push_back(v); 
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
 	cin>>links;
	cout<<"enter them : ";
 	for(int i=0;i<links;i++)
 	 {	
	   int inputlinks;
	   cin>>inputlinks;
	   addEdge(arr,j,inputlinks);
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
