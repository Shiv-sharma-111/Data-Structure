#include<iostream>
using namespace std;
int main()
{
	int T;
	cin>>T;
	int a=0,b=7;
    for(int i=0;i<T;i++)
    {
    	int n;
    	cin>>n;
    	if(abs(a-n)<=abs(b-n))
    	{
    		cout<<"A"<<endl;
    		a=n;
		}
		else
		{
			cout<<"B"<<endl;
			b=n;
		}
	}
}
