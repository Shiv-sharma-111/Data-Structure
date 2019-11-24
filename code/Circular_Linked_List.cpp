#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	struct Node* next;
};
void push(struct Node **head_ref,int data)
{
	struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
	struct Node* temp1=*head_ref;
	temp->data=data;
	temp->next=*head_ref;
	//if linked list is not null then set the next of last
	if(*head_ref!=NULL)
	{
		while(temp1->next!=*head_ref)
		{
			temp1=temp1->next;
		}
		temp1->next=temp;
	}
	else
	{
		temp->next=temp;
	}
	*head_ref=temp;
	
}
void print(struct Node* head)
{
	struct Node *temp=head;
	if(head!=NULL)
	{
		do
		{
			cout<<temp->data<<" ";
			temp=temp->next;
		}
		while(temp!=head);
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	struct Node* head=NULL;
	push(&head,12);
	push(&head,56);
	push(&head,2);
	push(&head,11);
	cout<<"Contents of circular Linked list"<<endl;
	print(head);
	return 0;
	
}
