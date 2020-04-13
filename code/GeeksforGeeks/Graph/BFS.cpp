void bfs(int s, vector<int> adj[], bool visited[], int N)
{
    // Your code here
    list<int> queue;
    queue.push_back(s);
    visited[s]=true;
    vector<int>::iterator i;
    while(!queue.empty())
    {
        s = queue.front();
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
