#include<bits/stdc++.h>
using namespace std;
int SieveMethod(int n)
{
	int count=0;
	for(int i=0;i<=n;i++)
	{
		if((n+i)==(n^i))
		count++;
	}
	return count;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n;
	cin>>n;
	cout<<SieveMethod(12)<<endl;
}
