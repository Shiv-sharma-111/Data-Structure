#include<bits/stdc++.h>
using namespace std;
int maxSum(int *arr,int n)
{
	sort(arr,arr+n);
	int sum=0;
	for(int i=0;i<n-1;i+=2)
	{
		sum+=arr[i];
	}
	return sum;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int arr[]={1,3,2,1,4,5};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<maxSum(arr,n);
	return 0;
}
