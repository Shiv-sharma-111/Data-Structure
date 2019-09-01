//USING THE HASHMAP CONCEPT
//AX SHIVAM SHARMA

#include<bits/stdc++.h>
using namespace std;
void Repeated(int arr[],int n)
{
	int min=-1;
	set<int> myset;
	for(int i=n-1;i>=0;i--)
	{
		if(myset.find(arr[i])!=myset.end())
		{
			min=i;
		}
		else
		{
			myset.insert(arr[i]);
		}
	}
	    if(min!=-1)
		{
			cout<<"The first repeating element is:"<<arr[min];
		}
		else
		{
			cout<<"There is no repeating element:"<<endl;
		}
	/*int count=0;
	for(int i=0;i<n;i++)
	{
		int j;
		for(j=0;j<n;j++)
		{
			//int count=0;
			if(arr[i]==arr[j])
			{
				count++;
				if(count==2)
				{
					cout<<"INDEX OF THE REPEATED NUMBER"<<j;
				}
			}
		}
	}*/
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	Repeated(arr,n);
	return 0;
	//for the repeated numbers......
}
