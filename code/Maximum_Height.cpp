#include<bits/stdc++.h>
using namespace std;
struct node
{
	int key;
	struct node *left, *right;
};
struct node* newNode(int item)
{
	struct node * temp=(struct node*)malloc(sizeof(struct node));
	temp->key=item;
	temp->right=NULL;
	temp->left=NULL;
	return temp;
}
struct node* insert(struct node* node,int key)
{
	if(node==NULL)
	return newNode(key);
	if(key<node->key)
	node->left=insert(node->left,key);
	else if(key>node->key)
	node->right=insert(node->right,key);
	return node;
}
int maxDepth(struct node* node)
{
	if(node==NULL)
	return 0;
	else
	{
		int ldepth= maxDepth(node->left);
		int rdepth= maxDepth(node->right);
		if(ldepth>rdepth)
		return (ldepth+1);
		else
		return (rdepth+1);
	}
}
int maxheight(int arr[],int n)
{
	struct node * rootA = NULL;
	rootA = insert(rootA, arr[0]);
	for(int i=1;i<n;i++)
	insert(rootA,arr[i]);
	struct node* rootB= NULL;
	rootB=insert(rootB,arr[n-1]);
	for(int i=n-2; i>=0;i--)
	insert(rootB,arr[i]);
	
	int A= maxDepth(rootA)-1;
	int B=maxDepth(rootB)-1;
	return max(A,B);
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<maxheight(arr,n); 
	return 0;
}
