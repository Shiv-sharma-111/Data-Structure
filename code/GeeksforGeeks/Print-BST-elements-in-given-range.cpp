vector<int> makeQueue(Node* root,int l,int h)
{
    queue<Node*> q;
    vector<int> vec;
    q.push(root);
    while(!q.empty())
    {
        Node* temp=q.front();
        q.pop();
        if(temp->data<=h && temp->data>=l)
        vec.push_back(temp->data);
        if(temp->right)
        q.push(temp->right);
        if(temp->left)
        q.push(temp->left);
    }
    return vec;
}
void printNearNodes(Node *root, int l, int h)
{
    vector<int>vec = makeQueue(root,l,h);
    sort(vec.begin(),vec.end());
    for(int i=0;i<vec.size();i++)
    {
        cout<<vec[i]<<" ";
    }
    //cout<<endl;
}
/*Algorithm:
1) If value of root’s key is greater than k1, then recursively call in left subtree.
2) If value of root’s key is in range, then print the root’s key.
3) If value of root’s key is smaller than k2, then recursively call in right subtree.*/
