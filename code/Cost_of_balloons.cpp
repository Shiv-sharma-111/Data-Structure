#include<iostream>
using namespace std;
int main()
{
	int T;
	cin>>T;
	for(int i=0;i<T;i++)
	{
		int g,p;
		cin>>g>>p;
		int n;
		cin>>n;
		int arr[10][2];
		for(int i=0;i<10;i++){
			for(int j=0;j<2;j++){
				cin>>arr[i][j];
			}
		}
		int count1=0,count2=0;
		for(int i=0;i<10;i++)
		{
			if(arr[i][0]==1)
			{
				count1++;
			}
		}
		for(int i=0;i<10;i++)
		{
			if(arr[i][1]==1)
			{
				count2++;
			}
		}
		int sum1=(count1*g)+(count2*p);
		int sum2=(count1*p)+(count2*g);
		if(sum1>=sum2)
		{
			cout<<sum1<<endl;
		}
		else
		{
			cout<<sum2<<endl;
		}
	}
}
