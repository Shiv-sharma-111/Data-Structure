#include<bits/stdc++.h>
using namespace std;
#define ull unsigned long long int
int32_t main()
{
	int T;
	cin>>T;
	for(int i=0;i<T;i++)
	{
		ull k;
		cin>>k;
		ull arr[7];
		for(int i=0;i<7;i++)
		{
			cin>>arr[i];
		}
		int sum=arr[0]+arr[1]+arr[2]+arr[3]+arr[4]+arr[5]+arr[6];
		int n=k%sum;
		//cout<<arr[6];
		if(n==0 && arr[6]!=0)
		{
			cout<<"SUNDAY"<<endl;
		}
		else if(k<=sum)
		{
			for(int i=0;k>0;i++)
			{
				k-=arr[i];
				
			}
			switch(i+1)
		{
			case 0:
				cout<<"MONDAY"<<endl;
				break;
			case 1:
				cout<<"TUESDAY"<<endl;
				break;
			case 2:
				cout<<"WEDNESDAY"<<endl;
				break;
			case 3:
				cout<<"THURSDAY"<<endl;
				break;
			case 4:
				cout<<"FRIDAY"<<endl;
				break;
			case 5:
				cout<<"SATURDAY"<<endl;
				break;
			default:
				cout<<"SUNDAY"<<endl;
				
		}
		}
		else
		{
		int j;
		for(j=0;n>0;j++)
		{
			n-=arr[j];
		}
		switch(j-1)
		{
			case 0:
				cout<<"MONDAY"<<endl;
				break;
			case 1:
				cout<<"TUESDAY"<<endl;
				break;
			case 2:
				cout<<"WEDNESDAY"<<endl;
				break;
			case 3:
				cout<<"THURSDAY"<<endl;
				break;
			case 4:
				cout<<"FRIDAY"<<endl;
				break;
			case 5:
				cout<<"SATURDAY"<<endl;
				break;
			default:
				cout<<"SUNDAY"<<endl;
				
		}
			
		}

	}
}
