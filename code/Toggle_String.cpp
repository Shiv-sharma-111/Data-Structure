#include<stdio.h>
#include<string.h>
main()
{
char str[30];
int i=0;
gets(str);
while(str[i]!='\0')
{
if(str[i]>='a'&&str[i]<='z')
printf("%c",str[i]-32);
else if(str[i]>='A' && str[i]<='Z')
printf("%c",str[i]+32);
i++;
}
}
