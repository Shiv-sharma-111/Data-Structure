#include<bits/stdc++.h>
using namespace std;
long long int max_bitwise(long long int L,long long int R)
{
	vector<long long int>v1,v2,v3;
	long long int z=0,i,ans=0,count=1;
	while(L>0)
	{
		v1.push_back(L%2);
		L=L/2;
	}
	while(R>0)
	{
		v2.push_back(R%2);
		R=R/2;
	}
	while(v1.size()!=v2.size())
	{
		v1.push_back(0);
	}
	for(i=v2.size()-1;i>=0;i--)
	{
		if(v2[i]==1 && v1[i]==0 && z==0)
		{
			z=1;
			continue;
		}
		if(z==1)
		{
			v1[i]=1;
		}
	}
	for(i=0;i<v2.size();i++)
	{
		v3.push_back(v2[i]|v1[i]);
	}
	for(i=0;i<v2.size();i++)
	{
		if(v3[i]==1)
		{
			ans+=count;
		}
		count*=2;
	}
	return ans;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	long long int L=10, R=20;
	cout<<max_bitwise(L,R);
	return 0;
}
