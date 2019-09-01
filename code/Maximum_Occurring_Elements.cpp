//AX SHIVAM SHARMA

#include<bits/stdc++.h>
#define ASCII_SIZE 256
using namespace std;
char MaxOccuring(char* str)
{
	int count[ASCII_SIZE]={0};
	int len=strlen(str);
	int max=0;
	char result;
	for(int i=0;i<len;i++)
	{
		count[str[i]]++;
		if(max<count[str[i]])
		{
			max=count[str[i]];
			result = str[i];
		}
	}
	return result;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	char str[]="sample string";
	cout<<"Max Occuring character is:"<<MaxOccuring(str);
}
