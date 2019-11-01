//NAIVE APPROACH
#include<bits/stdc++.h>
using namespace std;
int Count(string s,int pos)
{
	int c=s[pos-1];
	int counter=0;
	for(int i=0;i<pos-1;i++)
	{
		if(s[i]==c)
		counter=counter+1;
	}
	return counter;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	string s="abacsddaa";
	int pos;
	int n=s.length();
	int query[]={9,3,2};
	int Q=sizeof(query)/sizeof(query[0]);
	for(int i=0;i<Q;i++)
	{
		pos = query[i];
		cout<<Count(s,pos)<<endl;
	}
	return 0;
}
