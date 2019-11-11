#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	struct node* next;
};
struct node* createNode(int data)
{
	struct node* head=(struct node*)malloc(sizeof(struct node));
	head->data=data;
	head->next=NULL;
	return head;
}
struct node* mergeList(struct node* l1,struct node* l2)
{
	if(l1==NULL && l2==NULL)
	{
		return NULL;
	}
	if(l1==NULL && l2!=NULL)
	{
		return l2;
	}
	if(l1!=NULL && l2==NULL)
	{
		return l1;
	}
	if(l1->data<l2->data)
	{
		l1->next=mergeList(l1->next,l2);
	}
	else if(l1->data>=l2->data)
	{
		struct node* temp=l2;
		l2=l2->next;
		temp->next=l1;
		l1=temp;
		l1->next=mergeList(l1->next,l2);
	}
	return l1;
}
void print(struct node* head)
{
	while(head!=NULL)
	{
		cout<<head->data<<" ";
		head=head->next;
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	struct node* root1=createNode(1);
    root1->next=createNode(2);
	root1->next->next=createNode(4);
	struct node* root2=createNode(1);
    root2->next=createNode(3);
	root2->next->next=createNode(4);
	struct node* head=(mergeList(root1,root2));
	print(head);
	return 0;
}
