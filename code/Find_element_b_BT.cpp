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
struct node* Find(struct node *root,int data)
{
	if(root==NULL)
	{
		return (NULL);
	}
	else if(root->data>data)
	{
	    return (Find(root->left,data));
	}
	else if(root->data<data)
	{
		return (Find(root->right,data));
	}
	return (root);
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
	struct node* X=Find(root,34);
	return 0;
}

