#include<bits/stdc++.h>
using namespace std;
int main()
{
	int T;
	cin>>T;
	for(int i=0;i<T;i++)
	{
		long long int n;
		cin>>n;
		long long int k=n/3;
		if(k==0)
		{
			cout<<"-1"<<endl;
		}
		else
		{
			cout<<k<<" "<<2*k<<" "<<3*k<<endl;
		}
	}
}
//my best code in 3 minutes what a thinking........................Ax shivam Sharma
