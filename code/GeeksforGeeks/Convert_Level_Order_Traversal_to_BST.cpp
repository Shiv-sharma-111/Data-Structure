Node* insert(Node* root,int x)
{
    if(root==NULL)
    return new Node(x);
    if(x<=root->data) 
    root->left = insert(root->left,x);
    else
    root->right = insert(root->right,x);
    return root;
}
// You are required to complete this function
Node* constructBst(int arr[], int n)
{
    Node* ans= NULL;
    for(int i=0;i<n;i++)
    {
        ans = insert(ans,arr[i]);
    }
    return ans;
	
}
/*

The idea is to use a queue to construct tree. Every element of queue has a structure say NodeDetails which stores details of a tree node. The details are pointer to the node, and two variables min and max where min stores the lower limit for the node values which can be a part of the left subtree and max stores the upper limit for the node values which can be a part of the right subtree for the specified node in NodeDetails structure variable. For the 1st array value arr[0], create a node and then create a NodeDetails structure having pointer to this node and min = INT_MIN and max = INT_MAX. Add this structure variable to a queue. This Node will be the root of the tree. Move to 2nd element in arr[] and then perform the following steps:

    Pop NodeDetails from the queue in temp.
    Check whether the current array element can be a left child of the node in temp with the help of min and temp.node data values. If it can, then create a new NodeDetails structure for this new array element value with its proper ‘min’ and ‘max’ values and push it to the queue, make this new node as the left child of temp’s node and move to next element in arr[].
    Check whether the current array element can be a right child of the node in temp with the help of max and temp.node data values. If it can, then create a new NodeDetails structure for this new array element value with its proper ‘min’ and ‘max’ values and push it to the queue, make this new node as the right child of temp’s node and move to next element in arr[].
    Repeat steps 1, 2 and 3 until there are no more elements in arr[].

For a left child node, its min value will be its parent’s ‘min’ value and max value will be the data value of its parent node. For a right child node, its min value will be the data value of its parent node and max value will be its parent’s ‘max’ value.

 
*/
