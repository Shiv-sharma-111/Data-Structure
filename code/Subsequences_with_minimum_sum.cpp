#include<bits/stdc++.h>
using namespace std;
int binomialCoff(int n,int k)
{
	int C[n+1][k+1];
	for(int i=0;i<=n;i++)
	{
		for(int j=0;j<=min(i,k);j++)
		{
			if(j==0||j==i)
			{
				C[i][j]=1;
			}
			else
			{
				C[i][j]=C[i-1][j-1]+C[i-1][j];
			}
		}
	}
	return C[n][k];
}
int cntSubSeq(int arr[],int n,int k)
{
	sort(arr,arr+n);
	int num=arr[k-1];
	int Y=0;
	for(int i=k-1;i>=0;i--)
	{
		if(arr[i]==num)
		{
			Y++;
		}
	}
	int cntX=Y;
	for(int i=k;i<n;i++)
	{
		if(arr[i]==num)
		cntX++;
	}
	return binomialCoff(cntX,Y);
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
	int k=2;
	cout<<cntSubSeq(arr,n,k);
	return 0;
}
