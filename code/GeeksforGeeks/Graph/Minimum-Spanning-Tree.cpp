int minKey(int Key[],bool mtSet[],int V)
{
    int min=INT_MAX, index;
    for(int v=0;v<V;v++)
    {
        if(mtSet[v]==false && Key[v]<min)
        {
            min = Key[v],index=v;
        }
    }
    return index;
}

int spanningTree(int V,int E,vector<vector<int> > graph)
{
    // code here
    int parent[V],key[V];
    bool mtSet[V];
    for(int i=0;i<V;i++)
    {
        mtSet[i]=false, key[i]=INT_MAX;
    }
    key[0]=0;
    parent[0]=-1;
    for(int count=0;count<V-1;count++)
    {
        int u = minKey(key,mtSet,V);
        mtSet[u]=true;
        for(int v=0;v<V;v++)
        {
            if(graph[u][v]&& mtSet[v]==false && graph[u][v]<key[v])
            {
                parent[v]=u,key[v]=graph[u][v];
            }
        }
    }
    int count=0;
    for(int i=0;i<V;i++)
    {
        count+=key[i];
    }
    return count;
}
/*
Algorithm
1) Create a set mstSet that keeps track of vertices already included in MST.
2) Assign a key value to all vertices in the input graph. Initialize all key values as INFINITE. Assign key value as 0 for the first vertex so that it is picked first.
3) While mstSet doesn’t include all vertices
….a) Pick a vertex u which is not there in mstSet and has minimum key value.
….b) Include u to mstSet.
….c) Update key value of all adjacent vertices of u. To update the key values, iterate through all adjacent vertices. For every adjacent vertex v, if weight of edge u-v is less than the previous key value of v, update the key value as weight of u-v

The idea of using key values is to pick the minimum weight edge from cut. The key values are used only for vertices which are not yet included in MST, the key value for these vertices indicate the minimum weight edges connecting them to the set of vertices included in MST.

 
*/
