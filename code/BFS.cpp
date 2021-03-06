#include<bits/stdc++.h>
using namespace std;
class Graph
{
	private:
		int V;
		list<int> *adj;
	public:
		Graph(int v);
		void addEdge(int u,int v);
		void BFS(int s);
};
Graph::Graph(int v)
{
	this->V=v;
	adj= new list<int>[V];
}
void Graph::addEdge(int u,int v)
{
	adj[u].push_back(v);
}
void Graph::BFS(int s)
{
	bool *visited = new bool[V];
	for(int i=0;i<V;i++)
	{
		visited[i]=false;
	}
	
	list<int> queue;
	visited[s]=true;
	queue.push_back(s);
	
	list<int>::iterator i;
	while(!queue.empty())
	{
		s=queue.front();
		cout<<s<<" ";
		queue.pop_front();
		
		for(i=adj[s].begin();i!=adj[s].end();++i)
		{
			if(!visited[*i])
			{
				visited[*i]=true;
				queue.push_back(*i);
			}
		}
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	Graph g(4);
	g.addEdge(0,1);
	g.addEdge(0,2);
	g.addEdge(1,2);
	g.addEdge(2,0);
	g.addEdge(2,3);
	g.addEdge(3,3);
	cout<<"Following is the BFS "<<" starting from vertext 2"<<endl;
	g.BFS(2);
	return 0;
}
