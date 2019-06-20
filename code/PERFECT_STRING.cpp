#include<bits/stdc++.h>
using namespace std;
int main()
{
	int k;
	cin>>k;
	//string str;
	//getline(cin,str);
	char str[100000];
	cin>>str;
	int n=strlen(str);
	//cout<<n;
	//int n=str.size();
	int count1=0,count2=0;
	for(int i=0;i<n;i++)
	{
		if(str[i]=='x')
		{
			count1++;
			if(count1>k)
			{
				count2=0;
			}
		}
		else
		{
			count2++;
			if(count2>k)
			{
				count1=0;
			}
		}
	}
		if(count1>=count2)
		{
			cout<<count1+k<<endl;
			//cout<<count2<<endl;
		}
		else
		{
			cout<<count2+k<<endl;
		}
}
