#include<bits/stdc++.h>
using namespace std;
#define MAX 32
int FindX(int A,int B)
{
	int X=0;
	for(int bit=0;bit<MAX;bit++)
	{
		int tempBit=1<<bit;
		int bit0fx=A&B&tempBit;
		X+=bit0fx;
	}
	return X;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int A=9,B=8;
	cout<<FindX(A,B);
	return 0;
}
