/*You are required to complete this method*/
bool search(Node* root, int x)
{
    if(root==NULL)
    return 0;
    if(root->data==x)
    return 1;
    if(root->data>x)
    return search(root->left,x);
    if(root->data<x)
    return search(root->right,x);
    //return root;
    
    //Your code here
}
/*1. Check root data is equal to x or not. 
If not then recur for right subtree
when root data is less than x.
Otherwise recur for left subtree if root data is greater than x.*/
