#include<bits/stdc++.h>
using namespace std;
struct node 
{
	int data;
	struct node *next;
};
//Empty List
struct node* start=NULL;
struct node* create_header_list(int data)
{
	struct node* new_node, *Node;
	new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=data;
	new_node->next=NULL;
	if(start==NULL)
	{
		start=(struct node*)malloc(sizeof(struct node));
		start->next=new_node;
	}
	else
	{
		Node=start;
		while(Node->next!=NULL)
		{
			Node=Node->next;
			
		}
		Node->next=new_node;
	}
	return start;
}
struct node* display()
{
	struct node* Node;
    Node=start;
    Node=Node->next;
    while(Node!=NULL)
    {
    	cout<<Node->data<<" ";
    	Node=Node->next;
	}
	cout<<endl;
	return start;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	create_header_list(11);
	create_header_list(12);
	create_header_list(13);
	display();
	create_header_list(14);
	create_header_list(15);
	display();
	return 0;
}
