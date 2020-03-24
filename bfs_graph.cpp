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
    void BFS(int s);
	void s_d(int v);
};


graph::graph(int vertice) 
{ 
    this->v=vertice; 
    adj = new list<int>[v];	//adj is list pointer which is now pointing to the first list in an array of lists 
} 
  

void graph::addedge(int s, int d) 
{ 
    adj[s].push_back(d); // Add value d to list number s. 
	adj[d].push_back(s);
}


void graph::BFS(int s)
{
 bool *visited = new bool[v];	//created a bool arr of size same that of vertices v(v declared in class)
 for(int i=0;i<v;i++)			//make all vertices as not visited at first
 	{
	 visited[i]=false;
	}
 list<int> queue;		//create a list queue to store all to visit nodes
 visited[s]=true;		//mark the current node as visited bcoz we are on that node currently
 queue.push_back(s);	//put current node in queue 
 list<int>::iterator i;	//make an iterator i which will iterate through the list

 while(!queue.empty())
 	{
	 s=queue.front();
	 cout<<s<<' ';		 //printing in ur visited order
	 queue.pop_front();  //pop and display the visited vertice
	 //down here in for loop we iterating through the elements inside the lists first list,second ,third...
	 for(i=adj[s].begin(); i != adj[s].end();i++) //iterate i(iterator) from pointer adj current list number fully till <NULL
	 	{
		 if(!visited[*i])  
		 	{
			 visited[*i] = true;   //if the roots adjacent we looking at now aint visited then make it visited and put into queue 
			 queue.push_back(*i);
			}
		}
	}
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
 BFS(source);
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
