int detectloop(Node *head) {

    // your code here
    Node *slow, *fast;
    slow =head;
    fast=head;
    while(fast!=NULL && fast->next!=NULL)
    {
        fast = fast->next->next;
        slow = slow->next;
        if(fast == slow)
        {
            return 1;
        }
    }
    return 0;
}
