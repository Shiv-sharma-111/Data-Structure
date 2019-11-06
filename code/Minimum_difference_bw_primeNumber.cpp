#include<bits/stdc++.h>
using namespace std;
const int sz=1e5;
bool isPrime[sz+1];
void sieve()
{
	memset(isPrime,true,sizeof(isPrime));
	isPrime[0]=isPrime[1]=false;
	for(int i=2;i*i<=sz;i++)
	{
		if(isPrime[i])
		{
			for(int j=i*i;j<sz;j+=i)
			{
				isPrime[j]=false;
			}
		}
	}
}
//function to return minimum difference bw any two prime number
//from the given range [L,R]
int minDifference(int L,int R)
{
	int fst=0;
	for(int i=L;i<=R;i++)
	{
		if(isPrime[i])
		{
			fst=i;
			break;
		}
	}
	int snd=0;
	for(int i=fst+1;i<=R;i++)
	{
		if(isPrime[i])
		{
			snd=i;
			break;
		}
	}
	if(snd==0)
	return -1;
	
	int diff=snd-fst;
	int left=snd+1;
	int right=R;
	//for every integer in the range
	for(int i=left;i<=right;i++)
	{
		//if the current integer is prime
		if(isPrime[i])
		{
		if(i-snd<=diff)
		{
			fst=snd;
			snd=1;
			diff=snd-fst;
		}
	    }
	}
	return diff;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	// for generating the prime number
	sieve();
	int L=21,R=50;
	cout<<minDifference(L,R);
	return 0;
}
