//CHECK IF IT IS POSSIBLE TO MAKE ARRAY INCREASING OR DECREASING BY ROTATING THE ARRAY
//AX SHIVAM SHARMA
#include<bits/stdc++.h>
using namespace std;
bool isPossible(int arr[],int n)
{
	if(n<=2)
	return true;
	int flag=0;
	for(int i=0;i<n-2;i++)
	{
		if(!(arr[i]>arr[i+1] and arr[i+1]>arr[i+2]))
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	{
		return true;
	}
	flag=0;
	for(int i=0;i<n-2;i++)
	{
		if(!(arr[i]<arr[i+1] and arr[i+1]<arr[i+2]))
		{
			flag=1;
			break;
		}
	}
	if(flag==0)
	return true;
	int val1=INT_MAX, mini=-1,val2=INT_MIN,maxi=-1;
	for(int i=0;i<n;i++)
	{
		if(arr[i]<val1)
		{
			mini=i;
			val1=arr[i];
		}
		if(arr[i]>val2)
		{
			maxi=i;
			val2=arr[i];
		}
	}
	flag=1;
	for(int i=0;i<maxi;i++)
	{
		if(arr[i]>arr[i+1])
		{
			flag=0;
			break;
		}
	}
	if(flag==1 and maxi+1 ==mini)
	{
		flag=1;
		for(int i=mini;i<n-1;i++)
		{
			if(arr[i]>arr[i+1])
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
		return true;
	}
	flag=1;
	for(int i=0;i<mini;i++)
	{
		if(arr[i]<arr[i+1])
		{
			flag=0;
			break;
		}
	}
	if(flag==1 and maxi-1==mini)
	{
		flag=1;
		for(int i=maxi;i<n-1;i++)
		{
			if(arr[i]<arr[i+1])
			{
				flag=0;
				break;
			}
		}
		if(flag==1)
		{
			return true;
		}
	}
	return false;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n,count=0,count1=0;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	if(isPossible(arr,n))
	{
		cout<<"Yes"<<endl;
	}
	else
	{
		cout<<"No"<<endl;
	}
}
