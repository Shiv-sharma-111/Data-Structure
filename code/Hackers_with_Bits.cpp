#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,count=0;
	vector<int> v;
	cin>>n;
	int *arr=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	for(int i=0;i<n;i++)
	{
		if(arr[i]==1)
		{
			count++;
		}
		else if(arr[i-1]==1 && arr[i]==0)
		{
			count++;
		}
		else
		{
			v.push_back(count);
			count=0;
		}
	}
	int l=v.size();
	if(v.size()==0)
	{
		cout<<count-1<<endl;
	}
	else
	{
		sort(v.begin(),v.end());
		cout<<v[l-1]-1<<endl;
	}
}
///////////////////////////////////////////////////////////////////////////////////////////////////////////////
//Second approach
#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin>>n;
int a,i,c=0,o=0,j,z=0,minz=0,maxo=0;
vector<int> v;
for(i=0;i<n;i++)
{
cin>>a;
if(a==0)
minz++;
v.push_back(a);

}

for(i=0;i<n;i++)
{for(j=i;j<n;j++)
{
o=count(v.begin()+i,v.begin()+j,1);
z=count(v.begin()+i,v.begin()+j,0);
if((o>maxo)&&(z<=1))
maxo=o;
if(z>1)
break;
}
}
if(v.size()==minz)
cout<<0<<'\n';
else cout<<maxo+1<<'\n';
return 0;
}
