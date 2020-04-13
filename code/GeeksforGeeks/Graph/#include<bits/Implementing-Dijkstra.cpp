int minDistance(int dist[],bool set[],int V)
{
    int min = INT_MAX,min_index;
    for(int v=0; v<V;v++)
    {
        if(set[v]==false && dist[v]<=min)
        min = dist[v], min_index = v;
    }
    return min_index;
}
void printSolution(int dist[],int V)
{
    for(int i=0;i<V;i++)
    {
        cout<<dist[i]<<" ";
    }
}
void dijkstra(vector<vector<int>> graph, int src, int V)
{
    // Your code here
    int dist[V];
    bool set[V];
    for(int i=0;i<V;i++)
    {
        dist[i]=INT_MAX;
        set[i]=false;
    }
    dist[src]=0;
    for(int count=0;count<V-1;count++)
    {
        int u = minDistance(dist,set,V);
        set[u]=true;
        for(int v=0;v<V;v++)
        {
            if(!set[v] && graph[u][v] && dist[u]!=INT_MAX && dist[u]+graph[u][v]<dist[v])
            {
                dist[v]=dist[u]+graph[u][v];
            }
        }
    }
    printSolution(dist,V);
    
}
