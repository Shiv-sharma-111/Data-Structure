#include<iostream>
#include<cstring>
using namespace std;
int main()
{
	int T;
	cin>>T;
	for(int i=0;i<T;i++)
	{
		//string str,str1;
		char str[10000];
		char str1[10000];
		cin>>str>>str1;
		//getline(cin,str);
		int n=strlen(str);
		//getline(cin,str);
		int n1=strlen(str1);
		int count=0; 
		for(int i=0;i<n;i++)
		{
			for(int j=0;j<n1;j++)
			{
				if(str[i]==str1[j])
				{
					count++;
				}
			}
		}
		cout<<(n+n1)-(2*count);
	}
}
