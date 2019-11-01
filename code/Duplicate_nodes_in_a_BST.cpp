#include<bits/stdc++.h>
using namespace std;
struct node
{
	int key;
	struct node* left, *right;
};
struct node* newNode(int data)
{
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->key=data;
	temp->left= temp->right = NULL;
	return temp;
}
int cur=1,mx=0;
int node;
struct node* previous= NULL;
void inorder(struct node* root)
{
	if(root==NULL)
	{
		return;
	}
	inorder(root->left);
	if(previous!=NULL)
	{
		if(root->key==previous->key)
		{
			cur++;
		}
		else
		{
			cur=1;
		}
	}
	if(cur>mx)
	{
		mx=cur;
		node = root->key;
	}
	previous = root;
	inorder(root->right);
}
int findnode(struct node* root)
{
	inorder(root);
	return node;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	struct node* root= newNode(6);
	root->left = newNode(5);
	root->right = newNode(7);
	root->left->left = newNode(4);
	root->left->right = newNode(5);
	root->right->left = newNode(7);
	root->right->left = newNode(7);
	cout<<"Node of BST is "<<findnode(root)<<endl;
	return 0;
}
