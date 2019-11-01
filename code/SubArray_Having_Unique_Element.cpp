#include<bits/stdc++.h>
using namespace std;
int minimumSubArray(int *arr,int n)
{
	set<int> se;
	int cnt=1;
	for(int i=0;i<n;i++)
	{
		if(se.count(arr[i])==0)
		{
			se.insert(arr[i]);
		}
		else
		{
			cnt++;
			se.clear();
			se.insert(arr[i]);
		}
	}
	return cnt;
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
	cout<<minimumSubArray(arr,n);
	return 0;
}
