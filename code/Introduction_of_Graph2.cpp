#include<iostream>
#include<map>
#include<list>
#include<cstring>
using namespace std;
template <typename T>
class Graph
{
	map<T,list<T> >arr;
	public:
		Graph()
		{
			
		}
		void addEdge(T u,T v,bool bidir=true)
		{
			arr[u].push_back(v);
			if(bidir)
			{
				arr[v].push_back(u);
			}
		}
		void print()
		{
			//iterate over map = use a for each loop
			for(auto row : arr)
			{
				T key=row.first;
				cout<<key<<"->";
				for(T element:row.second)
				{
					cout<<element<<",";
				}
				cout<<endl;
			}
		}
	
};
int main()
{
	Graph<string> g;
	g.addEdge("Amritsar","dehli");
	g.addEdge("Amritsar","Jaipur");
	g.addEdge("Dehli","Siachen");
	g.addEdge("Dehli","Bangalore");
	g.addEdge("Dehli","Agra");
	g.addEdge("Amritsar","Siachen");
	g.print();
	
}
