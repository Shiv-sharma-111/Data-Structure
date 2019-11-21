//A 0(n) program for construction of binary search tree form post order traversal
//AX SHIVAM SHARMA

#include<bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	struct node *left,*right;
};
struct node* newNode(int data)
{
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	temp->data=data;
	temp->right=temp->left=NULL;
	return temp;
}
struct node* constructTreeUtil(int *arr,int *postIndex,int key,int min,int max,int size)
{
	if(*postIndex<0)
	return NULL;
	struct node* root=NULL;
	if(key>min && key<max)
	{
		root=newNode(key);
		*postIndex=*postIndex-1;
		if(*postIndex>=0)
		{
			root->right=constructTreeUtil(arr,postIndex,arr[*postIndex],key,max,size);
			root->left=constructTreeUtil(arr,postIndex,arr[*postIndex],min,key,size);
		}
	}
	return root;
} 
struct node* constructTree(int *arr,int size)
{
	int postIndex=size-1;
	return constructTreeUtil(arr,&postIndex,arr[postIndex],INT_MIN,INT_MAX,size);
}
void printInorder(struct node* root)
{
	if(root==NULL)
	return;
	cout<<root->data<<" ";
	printInorder(root->left);
	printInorder(root->right);
}
int main()
{
	int arr[]={1,7,5,50,40,10};
	int size=sizeof(arr)/sizeof(arr[0]);
	struct node *root=constructTree(arr,size);
	cout<<"Inorder traversal of the constructed tree"<<endl;
	printInorder(root);
	return 0;
}
