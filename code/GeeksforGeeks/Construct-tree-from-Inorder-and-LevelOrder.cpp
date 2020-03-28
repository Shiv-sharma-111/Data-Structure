int search(int in[],int iStart,int iEnd,int data)
{
    for(int i=iStart;i<=iEnd;i++)
    {
        if(in[i]==data)
        {
            return i;
        }
    }
    return -1;
}
int * find(int in[],int level[],int start,int end,int n)
{
    int v=(end-start)+1;
	int *arr = new int[v], j = 0; 
	for (int i = 0; i < n; i++) 
    {
		if (search(in, start, end, level[i]) != -1) 
			arr[j++] = level[i]; 
    }
	return arr; 
}
Node* buildTree(int in[], int level[], int iStart, int iEnd,int n)
{
    if(iStart>iEnd)
    return NULL;
    Node *root = new Node(level[0]);
    int index = search(in,iStart,iEnd,level[0]);
    int *left = find(in,level,iStart,index-1,n);
    int *right = find(in,level,index+1,iEnd,n);
    root->left = buildTree(in,left,iStart,index-1,index-iStart);
    root->right = buildTree(in,right,index+1,iEnd,iEnd-index);
    return root;
    
}
