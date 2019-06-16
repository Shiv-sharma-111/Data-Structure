#include<iostream>
using namespace std;
int main()
{
	int n;
	cin>>n;
	int flag=0;
	for(int i=1;n!=0;i++)
	{
		n=n-i;
		if(n<=0)
		{
			cout<<"Patlu";
			break;
		}
		n=n-(2*i);
		if(n<=0)
		{
			cout<<"Motu";
			break;
		}
	}
}
