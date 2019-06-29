#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int arr[n];
	int count1=0,count2=0,count3=0;
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		if(i%3==0)
		{
			count3+=arr[i];
		}
		else if(i%3==1)
		{
			count1+=arr[i];
		}
		else
		{
			count2+=arr[i];
		}
	}
	cout<<count1<<" "<<count2<<" "<<count3<<endl;
	
}
