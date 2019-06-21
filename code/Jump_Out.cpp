#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	if(n==1)
	{
		cout<<"1"<<endl;
	}
	else
	{
	for(int i=0;i<n;i++)
	{
		if(arr[i]>(n-i))
		{
			cout<<(i+1)<<endl;
			break;
		}
	}
    }
}
