#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
#define MAX 100001
#define ROW 10
#define COL 3
vector<int> indices[MAX];
int test[ROW][COL]={{2,3,6},
                 {2,4,4},
                 {2,6,3},
                 {3,2,6},
                 {3,3,3},
                 {3,6,2},
                 {4,2,4},
                 {4,4,2},
                 {6,2,3},
                 {6,3,2}};

int find_triplet(int *arr,int n)
{
	int answer=0;
	for(int i=0;i<n;i++)
	{
		indices[arr[i]].push_back(i);
	}
	for(int i=0;i<n;i++)
	{
		int y=arr[i];
		for(int j=0;j<ROW;j++)
		{
			int s=test[j][1]*y;
			if(s%test[j][0]!=0)
			continue;
			if(s%test[j][2]!=0)
			continue;
			int x=s/test[j][0];
			ll z=s/test[j][2];
			if(x>MAX||z>MAX)
			continue;
			int l=0;
			int r=indices[x].size()-1;
			int first=-1;
			while(l<=r)
			{
				int m=(l+r)/2;
				if(indices[x][m]<i)
				{
					first=m;
					l=m+1;
				}
				else
				{
					r=m-1;
				}
			}
			l=0;
			r=indices[z].size()-1;
			int third=-1;
			while(l<=r)
			{
				int m=(l+r)/2;
				if(indices[z][m]>i)
				{
					third=m;
					r=m-1;
				}
				else
				{
					l=m+1;
				}
			}
			if(first!=-1 && third!=-1)
			{
				answer+=(first+1)*(indices[z].size()-third);
			}
		}
	}
	return answer;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int arr[]={2,4,5,6,7};
	int n=sizeof(arr)/sizeof(arr[0]);
	cout<<find_triplet(arr,n);
	return 0;
}
