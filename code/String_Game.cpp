#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;
scanf("%d",&t);
while(t--)
{
string s;
cin>>s;
int a[26]={0};
int size=s.length();
int c=0;
for(int i=0;i<size;i++)
{
a[s[i]-'a']++;
}
for(int i=0;i<26;i++)
{
if(a[i]!=0)
c++;
}
if(c%2==0)
printf("Player2\n");
else
printf("Player1\n");
}
}
