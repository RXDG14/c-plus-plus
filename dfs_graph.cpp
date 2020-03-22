#include<iostream>
#include<list>
#include<iterator>
using namespace std;


class graph 
{ 
    int v;    // No. of vertices 
    list<int> *adj; //pointer to the list    
public: 
    graph(int v);  // Constructor 
    void addedge(int s, int d);  
    void dfs(int s);
	void dfs_traversal(int v,bool visited[]);
	void s_d(int v);
};


graph::graph(int vertice) 
{ 
    this->v=vertice; 
    adj = new list<int>[vertice];	//adj is list pointer which is now pointing to the first list in an array of lists 
} 
  

void graph::addedge(int s, int d) 
{ 
    adj[s].push_back(d); // Add value d to list number s. 
}


void graph::dfs_traversal(int s,bool visited[])
{
 visited[s]=true;
 cout<<s<<" ";		//current node is visited

 list<int>::iterator i;
 for(i=adj[s].begin(); i!=adj[s].end(); i++)
 	{
	 if(!visited[*i])
	 	{
		 dfs_traversal(*i,visited);	//if not visited the immediate next node then u go there directly thats why recursion
		}
	}
}


void graph::dfs(int s)
{
 bool *visited = new bool[v];	//int *arr= new int [size]
 for(int i=0;i<v;i++)
 	{
	 visited[i]=false;
	}
 dfs_traversal(s,visited);	
}


void graph::s_d(int v)	//source and destination for edges input
{
 int s,d,source,edges;		//s is source and "source" is starting vertice for bfs
 cout<<"enter the number of edges present : ";
 cin>>edges;
 cout<<"enter the source and destinations for your vertices : "<<'\n';
 for(int i=0;i<edges;i++)
 	{
	 cout<<"edge number "<<i+1<<" enter : "<<'\n';
	 cin>>s>>d;
	 addedge(s,d);
	}
 cout<<"enter the starting source : ";
 cin>>source;
 dfs(source);
}


int main()
{
    int v;
	cout<<"enter the number of vertices for your graph : ";
	cin>>v;
    graph g(v);
	g.s_d(v);
    cout<<'\n';
	return 0;
}
