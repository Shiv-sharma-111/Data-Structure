#include<bits/stdc++.h>
using namespace std;
int minCost(int *arr,int n)
{
	int dp[n+5][n+5],sum[n+5][n+5];
	//initializing the sum table
	memset(sum,0,sizeof(0));
	for(int i=0;i<n;i++)
	{
		int k=arr[i];
		for(int j=i;j<n;j++)
		{
		if(i==j)
		{
			sum[i][j]=k;
		}
		else
		{
			k+=arr[j];
			sum[i][j]=k;
		}
	    }
	}
	for(int i=n-1;i>=0;i--)
	{
		for(int j=i;j<n;j++)
		{
			dp[i][j]=INT_MAX;
			//no cost for a single rope
			if(i==j)
			dp[i][j]=0;
			else
			{
				for(int k=i;k<j;k++)
				{
					dp[i][j]=min(dp[i][j],dp[i][k]+dp[k+1][j]+sum[i][j]);
				}
			}
		}
	}
	return dp[0][n-1];
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int arr[]={7,6,8,6,1,1};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<minCost(arr,n);
	return 0;
}
