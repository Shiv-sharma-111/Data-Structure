#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool f(int x,int y)
{
	return x>y;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	//vector in the dynamic array
	vector<int> A={11,2,4,5,14};
	cout<<A[1]<<endl;
	sort(A.begin(),A.end());  //O(NlogN)
	//sort(A.begin(),A.end(),);
	//2,4,5,11,14
	bool present = binary_search(A.begin(),A.end(),4); //true
	present = binary_search(A.begin(),A.end(),3); //false
	A.push_back(100);
	present = binary_search(A.begin(),A.end(),100);  //true
	A.push_back(100);
	A.push_back(100);
	A.push_back(100);
	A.push_back(123);
	vector<int>::iterator it = lower_bound(A.begin(),A.end(),100); // >=100  O(log N) in a sorted array
	vector<int>::iterator it2 = upper_bound(A.begin(),A.end(),100); // >100 means give iterator at 123
	cout<<*it<<" "<<*it2<<endl;
	cout<<it2-it<<endl; //4
	// by upper bound - lower bound we can calculate the number of occurence of an element
	A.pop_back();
	sort(A.begin(),A.end(),f);
	vector<int>::iterator it3;
	for(it3=A.begin();it3!=A.end();it3++)
	{
		cout<<*it3<<" ";
	}
	cout<<endl;
	for(int x: A)
	{
		cout<<x<<" ";
	}
	cout<<endl;
	// we can use auto keyword as 
	//auto it;
	return 0;// end of vector rivision
	
}
