#include<bits/stdc++.h>
using namespace std;
#define Max 100001
typedef struct
{
	int l,r,v;
} interval;
bool cmp(interval a,interval b)
{
	return a.v<b.v;
}
bool isPossible(int range[][3],int N)
{
	interval test[N];
	for(int i=0;i<N;i++)
	{
		test[i].l=range[i][0];
		test[i].r=range[i][1];
		test[i].v=range[i][2];
	}
	sort(test,test+N,cmp);
	for(int i=0;i<N;i++)
	{
		int count[Max]={0};
		int current_velocity=test[i].v;
		int j=i;
		while(j<N && test[j].v==current_velocity)
		{
			for(int k=test[j].l;k<=test[j].r;k++)
			{
				count[k]++;
				if(count[k]>=3)
				{
					return false;
				}
			}
			j++;
		}
		i=j-1;
	}
	return true;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int range[][3]={{1,2,3},{2,5,1},{3,10,1},{4,4,1},{5,7,10}};
	int n=sizeof(range)/sizeof(range[0]);
	if(isPossible(range,n))
	{
		cout<<"Yes";
	}
	else
	{
		cout<<"No";
	}
	return 0;
}
