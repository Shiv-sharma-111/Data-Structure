// function should return the sum of all 
// left leaf nodes
int leftLeavesSum(Node *root)
{
    if(root==NULL)
    return 0;
    if(root->left && root->left->left==NULL && root->left->right==NULL)
    return root->left->data+leftLeavesSum(root->right);
    return leftLeavesSum(root->left)+leftLeavesSum(root->right);
    // Code here
}
