
/* Should convert tree to its mirror */
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
