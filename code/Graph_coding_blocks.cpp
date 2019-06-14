//Graph is a Data strucure
//finite set of nodes and edges
//Google map is live example of graph
//all the landmark(places) in the form of node of graph
//Social network like facebook, linked
//lets talk about facebok API............
//connected graph ..reach all other nodes
//implementation 1.Edge list 2.Adjacency matrix 3.Adjacency list(most widely used)
//Edge list is not comfortable becoz of iteration
//in Adjacency matrix integer or boolean matrix is used VXV matrix ..wasting of memory o(r^2) 
//Adjacency matrix is memory efficient
#include<iostream>
#include<vector>
using namespace std;
//Adj list implementation for Integer Nodes
class Graph
{
	int V;
	vector<int>*arr;
	public:
	Graph(int v)
	{
		V=v;
		arr=new vector<int>[V];
	}
	void addEdge(int u,int v, bool bidir=true)
	{
		arr[u].push_back(v);
		if(bidir)
		{
			arr[v].push_back(u);
		}
	}
	void print()
	{
		//c++ support for each loop
		for(int i=0;i<V;i++)
		{
			cout<<i<<"->";
			for(int node:arr[i])
			{
				cout<<node<<" ";
			}
			cout<<endl;
		}
	}
	
};
int main()
{
	Graph g(4);
	g.addEdge(0,1);
	g.addEdge(0,2);
	g.addEdge(0,3);
	g.addEdge(1,3);
	g.addEdge(3,2);

    g.print();
	
}
