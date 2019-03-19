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
struct node* Delete(struct node* root,int data)
{
	struct node* temp;
	if(root==NULL)
	{
		cout<<"No such element exist"<<endl;
	}
	else if(data<root->data)
	{
		root->left=Delete(root->left,data);
	}
	else if(data>root->data)
	{
		root->right=Delete(root->right,data);
	}
	else
	{
		if(root->left && root->right) //means both children exist
		{
			temp=FindMax(root->left); //Function to find max in left sub tree so create it..................READ THIS
			root->data=temp->data;
			root->left=Delete(root->left,root->data);
		}
		else
		{
			temp=root;
			if(root->left==NULL)
			root=root->right;
			if(root->right==NULL)
			root=root->left;
			free(temp);
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
	return 0;
}

