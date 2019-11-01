//THE MAXIMUM VALUE FOR THE MEAN OF ANY SUBSET WILL BE WHEN THE SUBSET WILL ONLY CONSIST OF THE MAXIMUM ELEMENT FROM THE ARRAY.
#include<bits/stdc++.h>
using namespace std;
int cntSubSets(int arr[],int n)
{
	int maxVal = *max_element(arr,arr+n);
	int cnt=0;
	for(int i=0;i<n;i++)
	{
		if(arr[i]==maxVal)
		{
			cnt++;
		}
	}
	return (pow(2,cnt)-1);
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<cntSubSets(arr,n);
	return 0;
}
