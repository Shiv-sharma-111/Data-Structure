#include<bits/stdc++.h>
using namespace std;
int min_moves(int n)
{
	//to store the required answer
	int ans=INT_MAX;
	for(int i=1; i*i<=n;i++)
	{
		if(n%i==0)
		{
			ans=min(ans,i+n/i-2);
		}
	}
	return ans;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n=10;
	cout<<min_moves(n);
	return 0;
}
