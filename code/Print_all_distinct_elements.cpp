#include<bits/stdc++.h>
using namespace std;
void Distinct(int arr[],int n)
{
	for(int i=0;i<n;i++)
	{
		int j;
		for(j=0;j<i;j++)
		{
			if(arr[i]==arr[j])
			break;
		}
		if(i==j)
		{
			cout<<arr[i]<<" ";
		}
	}
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
	Distinct(arr,n);
	return 0;
}
//HASHMAP CLASS EXIST IN JAVA
//java.util.HashMap;
