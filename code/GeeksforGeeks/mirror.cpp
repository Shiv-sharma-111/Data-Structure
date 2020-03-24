/*

Algorithm – Mirror(tree):

(1)  Call Mirror for left-subtree    i.e., Mirror(left-subtree)
(2)  Call Mirror for right-subtree  i.e., Mirror(right-subtree)
(3)  Swap left and right subtrees.
          temp = left-subtree
          left-subtree = right-subtree
          right-subtree = temp

*/
void mirror(Node* node) 
{
    if(node==NULL)
    return;
    mirror(node->left);
    mirror(node->right);
    Node* temp;
    temp=node->left;
    node->left = node->right;
    node->right = temp;
    
    /*if(node==NULL)
    return;
    queue<Node*> Queue;
    Queue.push(root);
    while(!Queue.empty())
    {
        Node* temp = Queue.front();
        Queue.pop();
        Node* n;
        n=temp->right;
        temp->right=temp->left;
        temp->left=n;
        if(temp->left!=NULL)
        Queue.push(temp->left);
        if(temp->right!=NULL);
        Queue.push(temp->right);
    }*/
    // Your Code Here
}
