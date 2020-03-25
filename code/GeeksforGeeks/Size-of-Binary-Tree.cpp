/* Computes the number of nodes in a tree. */
int getSize(Node* root)
{
    if(root==NULL)
    return 0;
    
    return 1+getSize(root->left)+getSize(root->right);
   // Your code here
}
