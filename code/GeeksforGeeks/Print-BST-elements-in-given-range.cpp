void v(Node* root, int hd, int &l, int &r)
{
    if(root==NULL)
    return;
    l=min(l,hd);
    r=max(r,hd);
    v(root->left,hd-1,l,r);
    v(root->right,hd+1,l,r);
}
int verticalWidth(Node* root)
{
 int l=0,r=0;
 v(root,0,l,r);
 return abs(l)+r+1;
}
/*Algorithm:
1) If value of root’s key is greater than k1, then recursively call in left subtree.
2) If value of root’s key is in range, then print the root’s key.
3) If value of root’s key is smaller than k2, then recursively call in right subtree.*/

/*
Approach: Take inorder traversal and then take a temporary variable, if we got
left then temp value decreases and if go to right temp value increases. Assest a condition
in this , if minimum is greater than temp, then minimum = temp and if maximum less than temp then
maximum = temp. at the end print minimum+maximum which is verticle width  of the tree.
*/
