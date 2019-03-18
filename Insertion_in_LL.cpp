#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
struct Node
{
	int data;
	struct Node *next;
};
//insert a node on the front of the linked list
void Add(struct Node** head,int data)
{
	struct Node* X=(struct Node*)malloc(sizeof(struct Node));
	X->data=data;
	X->next=*head;
	*head=X;
}
//insert a node in middle of the list
void Add1(struct Node* prev,int data)
{
	struct Node* X=(struct Node*)malloc(sizeof(struct Node));
	X->data=data;
	X->next=prev->next;
	prev->next=X;
	
}
void Add2(struct Node** head,int data)
{
	struct Node* X=(struct Node*)malloc(sizeof(struct Node));
	X->data=data;
	X->next=NULL;
	struct Node* last=*head;
	if(*head==NULL)
	{
		*head=X;
		return;
	}
	while(last->next!=NULL)
	{
		last=last->next;
	}
	last->next=X;
	return;
}
void print(struct Node* head)
{
	if(head==NULL)
	{
		return;
	}
	cout<<head->data<<" ";
	head=head->next;
	return print(head);
}
int main()
{
	struct Node *head,*second,*third;
	head=(struct Node*)malloc(sizeof(struct Node));
	second=(struct Node*)malloc(sizeof(struct Node));
	third=(struct Node*)malloc(sizeof(struct Node));
	head->data=2;
	head->next=second;
	second->data=4;
	second->next=third;
	third->data=6;
	third->next=NULL;
	Add(&head,1);
	Add1(second,5);
	Add2(&head,8);
	print(head);
}
