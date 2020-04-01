struct node* makeUnion(struct node* head1, struct node* head2)
{
    set<int> s;
    struct node* temp = head1;
    struct node* temp1 = head2;
    while(temp!=NULL)
    {
        s.insert(temp->data);
        temp=temp->next;
    }
    while(temp1!=NULL)
    {
        s.insert(temp1->data);
        temp1=temp1->next;
    }
    for(auto it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    return NULL;
}
