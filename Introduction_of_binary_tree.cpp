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
int main()
{
	struct node *root=NewNode(1);
	root->left=NewNode(2);
	root->right=NewNode(3);
	return 0;
}

