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
void printPostorder(struct node*root)
{
	if(root==NULL)
	{
		return;
	}
	printPostorder(root->left);
	printPostorder(root->right);
	cout<<"Postorder: "<<endl;
	cout<<root->data<<" ";
}
void printInorder(struct node*root)
{
	if(root==NULL)
	{
		return;
	}
	printPostorder(root->left);
	cout<<"Inorder: "<<endl;
	cout<<root->data<<" ";
	printPostorder(root->right);
	
}
void printPreorder(struct node*root)
{
	if(root==NULL)
	{
		return;
	}
	cout<<"Preorder: "<<endl;
	cout<<root->data<<" ";
	printPostorder(root->left);
	printPostorder(root->right);
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
	printPreorder(root);
	printPostorder(root);
	printInorder(root);
	
	return 0;
}

