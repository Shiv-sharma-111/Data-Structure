#include<iostream>
#include<set>
#include<algorithm>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	set<int> S;
	S.insert(1);
	S.insert(2);
	S.insert(-10);
	S.insert(-1);
	for(int x:S)
	{
		cout<<x<<" ";
	}
	cout<<endl;
	//log N time is really good time complexity in view of compatitive proramming
	//-10 -1 1 2
	auto it=S.find(-1);
	if(it==S.end())
	{
		cout<<"Not Present"<<endl;
	}
	else
	{
		cout<<"its present"<<endl;
		cout<<*it<<endl;
	}
	auto it2=S.upper_bound(-1); // this will give iterator at -1
	auto it3=S.upper_bound(0);
	cout<<*it2<<" "<<*it3<<endl;
	auto it4=S.upper_bound(2);
	if(it4==S.end())
	{
		cout<<"oops sorry not find something like this"<<endl;
	}
	//sets are very very powerful than the vector
	
	
}
