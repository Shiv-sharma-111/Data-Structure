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

/*Maintain 3 variables maximum and minimum, and curr.

Maximum and Minimum will store the max value of width of tree and min value of width of tree, over all recursion calls.

1. Pass Maximum and Minimum through reference for updation.
2. For call on left subree pass curr-1 and for call on right subree pass curr + 1

After all the calls have been made, return the difference of maximum and minimu*/
