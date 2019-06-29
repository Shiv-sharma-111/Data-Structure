#include<iostream>
using namespace std;
int sum(int n)
{
	int res=0;
	for(int i=0;n!=0;i++)
	{
		res+=n%10;
		n=n/10;
	}
	return res;
}

int main()
{
	int a,b;
	
}
