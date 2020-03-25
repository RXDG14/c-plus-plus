#include<bits/stdc++.h>
using namespace std;

#define inf 9999999


class graph
{
 int v;
 list<pair<int,int> > *adj;		//vertex and weight for every edge for this list pointer
 public:
 	graph(int v);				//constructor
	void s_d();
	void addedge(int s,int d,int w);
	void dijkstra(int source);
};


graph::graph(int vertex)
{
 this->v=vertex;
 adj = new list<pair<int,int>> [v]; 	//pointer pointing to the first element of list
}


void graph::addedge(int s,int d,int w)
{
 adj[s].push_back(make_pair(d,w));		//put d vertex in s with weight w(make_pair pairs d and w here)(make_pair stl)
 adj[d].push_back(make_pair(s,w));		
}


void graph::dijkstra(int source)
{	
 //create a priority queue to get least distance edge
 //prioritize the queue pq this is syntax for it just put your pair inside the vector and greater all changes will take place
 //in pair you created. the pq stores elements in descending order
 
 priority_queue< pair<int,int>, vector <pair<int,int>> ,greater <pair<int,int>> > pq;//made priority queue pq for least dist
 
 //this priority queue automatically acts as a min heap with least value as a root node
 
 vector<int> dist(v,inf); 		//made a vector dist in which all vertices v have been made infinite
 pq.push(make_pair(0,source));	//put source in pq and make its distance from itself zero
 dist[source]=0;				//update it in array [dist] the source distance from itself as 0
 while(!pq.empty())
 	{
	 int u=pq.top().second;		//current node ka vertex (s>>d>>w input tha so d is the vertex taken here)
	 			//top here above because its a min heap and least value is the root node so we choose top()

	 pq.pop();
	 list<pair<int,int>> ::iterator i;
	 for(i=adj[u].begin();i!=adj[u].end();i++)		//adjacent vertices
	 	{
		 int v=(*i).first;			//make_pair(-->v,w)	at the adjacent node
		 int w=(*i).second;			//make_pair(v,-->w) at the adjacent node
		 
		 if(dist[v]>dist[u] + w)			//check if current node is infinity?
		 	{
			 dist[v]=dist[u] + w;			//if infinity then update it to its weight
			 pq.push(make_pair(dist[v],v)); //push the pair<distance of vertex and vertex> into the pq
			}
		}
	}
	cout<<"enter destination vertex : ";
	int destination;
	cin>>destination;
	for(int i=0;i<v;i++)
		{
		 if(i==destination)
		 	{
			 cout<<dist[i]<<'\n';	//if found then print its total distance from source
			 break;
			}	
		}
	/*printf("Vertex Distance from Source\n");
	for (int i = 0; i < v; ++i)
		printf("%d \t\t %d\n", i, dist[i]);*/
}


void graph::s_d()
{
 int edges,s,d,w;					//source destination and weight
 cout<<"enter the number of edges present : ";
 cin>>edges;
 cout<<"enter them along with weights: "<<'\n';
 for(int i=0;i<edges;i++)
 	{
	 cin>>s>>d>>w;
	 addedge(s,d,w);
	}
}


int main()
{
 int v,source;
 cout<<"enter the number of vertices : ";
 cin>>v;
 graph g(v);
 g.s_d();
 cout<<"enter the source vertex : ";
 cin>>source;
 g.dijkstra(source);
}
