//IT CAN BE OBSERVED THAT FOR THE VALUES OF N=1,2,3,4,5.......,A SERIES WILL BE FORMED AS 0,2,6,14,30,62,..........WHOSE NTH TERM IS 2^n-2
#include<bits/stdc++.h>
using namespace std;
int cntEdges(int n)
{
	int edges=pow(2,n)-2;
	return edges;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n;
	cin>>n;
	cout<<cntEdges(n);
	return 0;
	
}
