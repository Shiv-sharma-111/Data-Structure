#include<iostream>
using namespace std;
int main()
{
	string str;
	getline(cin,str);
	int n=str.size();
	int count=0,flag=0;
	for(int i=0;i<n;i++)
	{
		if(str[i]==54)
		{
			count++;
		}
		else if(str[i]<49||str[i]>54)
		{
			flag=-1;
		}
	}
	if(flag==-1)
	{
		cout<<"-1"<<endl;
	}
	else
	{
		cout<<(n-count)<<endl;
	}
}
