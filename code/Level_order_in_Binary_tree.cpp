//introduction of binary tree
#include<iostream>
#include<queue>
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
void printLevelOrder(struct node *root)
{
	if(root==NULL)
	{
		return;
	}
	queue<struct node*>q;
	q.push(root);
	while(q.empty()==false)
	{
		struct node *X=q.front();
		cout<<X->data<<" ";
		q.pop();
		if(X->left!=NULL)
		q.push(X->left);
		if(X->right!=NULL)
		q.push(X->right);
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
	cout<<"Level order Traversal of binary tree"<<endl;
	printLevelOrder(root);

	return 0;
}

