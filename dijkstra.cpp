/******************************************************************************************************
           can only calculate shortest distance . cannot display the travelled shortest path
		 here it is -->https://www.geeksforgeeks.org/printing-paths-dijkstras-shortest-path-algorithm/							
******************************************************************************************************/

#include<bits/stdc++.h>
using namespace std;
int u;
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
 pq.push(make_pair(0,source));	//put source in pq .(weight,vertex) u put source at start and its distance from source (itself->w)
 dist[source]=0;				//update it in array [dist] the source distance from itself as 0
 while(!pq.empty())
 	{
	 u=pq.top().second;	//goes to next node in pq(s>>d>>w so d taken here)(second bcoz source->pq.push source is second)
	 			//top here above because its a min heap and least value is the root node so we choose top()
	 pq.pop();
	 list<pair<int,int>> ::iterator i;
	 for(i=adj[u].begin();i!=adj[u].end();i++)		//adjacent vertices
	 	{
		 int v=(*i).first;			//make_pair(-->v,w)	at the adjacent node
		 int w=(*i).second;			//make_pair(v,-->w) at the adjacent node
		 
		 if(dist[v]>dist[u] + w)			//check if current node is infinity?
		 	{
			 dist[v]=dist[u] + w;			//if infinity then update it to its weight to reach from source
			 pq.push(make_pair(dist[v],v)); //push the pair<distance of vertex and vertex> into the other vertex in pq
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
			 cout<<"shortest distance total : "<<dist[i]<<'\n';	//if found then print its total distance from source
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
