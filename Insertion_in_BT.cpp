//introduction of binary tree
#include<iostream>
#include<stdlib.h>
using namespace std;
struct node
{
	struct node *left;
	int data;
	struct node *right;
};
struct node * NewNode(int data)
{
	struct node *X=(struct node*)malloc(sizeof(struct node));
	X->data=data;
	X->right=NULL;
	X->left=NULL;
	return X;
}
void Insert(struct node* root,int data)
{
	struct node* par;
	struct node *n=(struct node*)malloc(sizeof(struct node));
	n->data=data;
	n->left=NULL;
	n->right=NULL;
	if(root==NULL)
	{
		root=n;
	}
	else
	{
		par=root;
		while(par!=NULL)
		{
			if(par->data>data)
			{
				if(par->left==NULL)
				{
					par->left=n;
				}
				par=par->left;
			}
			else if(par->data<data)
			{
				if(par->right==NULL)
				{
					par->right=n;
				}
				par=par->right;
			}
		}
	}

}
int main()
{
	struct node *root=NewNode(1);
	root->left=NewNode(2);
	root->right=NewNode(3);
	root->left->left=NewNode(5);
	root->left->right=NewNode(4);
	root->right->left=NewNode(15);
	root->right->right=NewNode(34);
	Insert(root,26);
	return 0;
}

