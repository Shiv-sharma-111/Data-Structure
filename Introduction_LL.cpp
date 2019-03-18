#include<bits/stdc++.h>
#include<stdlib.h>
using namespace std;
struct Node
{
	int data;
	struct Node *next;
};
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
	print(head);
}
