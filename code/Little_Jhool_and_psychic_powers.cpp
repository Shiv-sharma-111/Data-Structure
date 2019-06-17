#include<iostream>
using namespace std;
int main()
{
	string str;
	getline(cin,str);
	int n=str.size();
	int count1=0,count2=0;
	for(int i=0;i<=n;i++)
	{
		if(str[i]==48)
		{
			count1++;
			if(count1==6)
			{
				cout<<"Sorry, sorry!"<<endl;
				break;
			}
			count2=0;
		}
		else if(str[i]==49)
		{
			count2++;
			if(count2==6)
			{
				cout<<"Sorry, sorry!"<<endl;
				break;
			}
			count1=0;
		}
		else
		{
			cout<<"Good luck!"<<endl;
			break;
		}
		
	}
	
}
