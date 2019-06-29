#include<iostream>
using namespace std;
int main()
{
	string str;
	getline(cin,str);
	int x=0,y=0;
	for(int i=0;i<str.size();i++)
	{
		if(str[i]=='L')
		{
			x--;
		}
		else if(str[i]=='R')
		{
			x++;
		}
		else if(str[i]=='U')
		{
			y++;
		}
		else
		{
			y--;
		}
		
	}
	cout<<x<<" "<<y;
}
