// Should reverse list and return new head.
Node* reverseList(Node *head)
{

    if(head==NULL) return NULL;
    Node* prev,*curr,*nextnode;
    prev=NULL;
    curr = nextnode = head;
    while(nextnode!=NULL)
    {
        nextnode = nextnode->next;
        curr->next = prev;
        prev = curr;
        curr = nextnode;
    }
    return prev;
    
}

