#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	struct Node *left,*right;
};
struct Node* createNode(int data)
{
	struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
	temp->data=data;
	temp->left=NULL;
	temp->right=NULL;
	return temp;
}
/*void Insert(struct Node* root,int data)
{
	struct Node* temp=(struct Node*)malloc(sizeof(struct Node));
	temp->data=data;
	temp->left=NULL;
	temp->right=NULL;
	if(root==NULL)
	{
		root=temp;
	}
	else
	{
		if(root->data>data )
	}
}*/
void postOrder(struct Node* root)
{
	if(root)
	{
		postOrder(root->left);
		postOrder(root->right);
		cout<<root->data<<endl;
	}
}
struct Node* findNode(struct Node* root,int data)
{
	if(root==NULL)
	{
		return NULL;
	}
	if(root->data>data)
	{
		return findNode(root->left,data);
	}
	else if(root->data<data)
	{
		return findNode(root->right,data);
	}
	return root;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	struct Node* root=createNode(17);
	root->left=createNode(15);
	root->right=createNode(25);
	root->left->left=createNode(5);
	root->left->right=createNode(16);
	root->right->left=createNode(20);
	root->right->right=createNode(28);
	Insert(root,7);
	postOrder(root);
	struct Node* place=findNode(root,28);
	cout<<"The location of 28 is:"<<place<<endl;
}
