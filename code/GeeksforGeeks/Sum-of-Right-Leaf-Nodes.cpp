// function should return the sum of all 
// right leaf nodes
int rightLeafSum(Node* root)
{
if(root==NULL)
return 0;
if(root->right!=NULL&&(root->right->left==NULL&&root->right->right==NULL))
return root->right->data+rightLeafSum(root->left);
else
return rightLeafSum(root->left)+rightLeafSum(root->right);
}
