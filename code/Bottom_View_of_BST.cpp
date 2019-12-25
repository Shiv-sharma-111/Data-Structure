#include<bits/stdc++.h>
using namespace std;
struct Node
{
	int data;
	Node *left,*right;
	Node(int key)
	{
		data=key;
		left=right=NULL;
	}
};
int l=0, r=0;
int N;
void Bottom(Node* root,int arr[],int arr2[],int x,int p,int mid)
{
	if(root==NULL)
	return;
	if(x<l)
	{
		l=x;
	}
	if(x>r)
	{
		r=x;
	}
	if(arr[mid+x]==INT_MIN)
	{
		arr[mid+x]=root->data;
		arr2[mid+x]=p;
	}
	else if(arr2[mid+x]<p)
	{
		arr[mid+x]=root->data;
		arr2[mid+x]=p;
	}
	Bottom(root->right,arr,arr2,x+1,p+1,mid);
	Bottom(root->left,arr,arr2,x-1,p+1,mid);
}
void bottomView(struct Node* root)
{
	int arr[2*N +1];
	int arr2[2*N +1];
	for(int i=0;i<2*N +1; i++)
	{
		arr[i]=INT_MIN;
		arr2[i]=INT_MIN;
	}
	int mid=5,x=0,p=0;
	Bottom(root,arr,arr2,x,p,mid);
	for(int i=mid+1;i<=mid+r;i++)
	{
		cout<<arr[i]<<" ";
	}
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	N=5;
	Node* root= new Node(1);
	root->right=new Node(2);
	root->right->right= new Node(4);
	root->right->right->left=new Node(3);
	root->right->right->right=new Node(5);
	bottomView(root);
	return 0;	
}
