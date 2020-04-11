bool Graph::isConnected() 
{
    bool *visited = new bool[V];
    for(int i=0;i<V;i++)
    {
        visited[i]=false;
    }
    vector<int> vec;
    list<int> queue;
    visited[0]=true;
    queue.push_back(0);
    list<int>:: iterator i;
    while(!queue.empty())
    {
        int s = queue.front();
        vec.push_back(s);
        queue.pop_front();
         
         for(i=adj[s].begin();i!=adj[s].end();i++)
         {
            if(!visited[*i])
            {
                visited[*i]=true;
                vec.push_back(*i);
                queue.push_back(*i);
            }
         }
    }
    if(vec.size()==V)
    return true;
    else
    return false;
//add code here.    
}

int Graph::isEulerian()
{
//add code here.
    int even=0,odd=0;
    for(int i=0;i<V;i++){
        if(adj[i].size()%2!=0)
            odd++;
        else
            even++;
    }
    
    if(even==V)
        return 2;
    if(odd==2)
        return 1;
    return 0;

}

//Theorem: A graph has Eulerian Path if at most it has two nodes with odd number of degrees
//Theorem: A graph has Eulerian Circuit if all the nodes have even number of degrees.
