#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	struct Node* next;
};
void InsertFront(struct Node** head,int data)
{
	struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
	temp->data=data;
	temp->next=*head;
	*head=temp;
}
void Print(struct Node* head)
{
	while(!head==NULL)
	{ 

	cout<<head->data<<endl;
	head=head->next;
    }
}
int main()
{
	struct Node* head,*first,*second;
	head=(struct Node*)malloc(sizeof(struct Node));
	first=(struct Node*)malloc(sizeof(struct Node));
	second=(struct Node*)malloc(sizeof(struct Node));
	head->data=1;
	head->next=first;
	first->data=2;
	first->next=second;
	second->data=3;
	second->next=NULL;
	InsertFront(&head,4);
	Print(head);
}
