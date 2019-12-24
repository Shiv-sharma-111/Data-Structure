#include<iostream>
#include<map>
#include<algorithm>
using namespace std;
//void PowerStl
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	map<int,int> A;
	A[1]=100;
	A[2]=200;
	A[3]=-1;
	A[98832239]=1;
	map<char,int> cnt;
	string x ="rachit jain";
	for(char c:x)
	{
		cnt[c]++;
	}
	cout<<cnt['a']<<" "<<cnt['z']<<endl; //log N time for every operation
	//power of STL 
	
}
