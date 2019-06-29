//infix and postfix expression---------
// (1+2) and (12+)
#include<bits/stdc++.h>
using namespace std;
struct Stack
{
	int top;
	unsigned capacity;
	char *arr;
};
int Checker(char x);
char pop(struct Stack * stack);
struct Stack * CreateStack(int capacity)
{
	struct Stack *stack = (struct Stack*)malloc(sizeof(struct Stack));
	stack->capacity=capacity;
	stack->top=-1;
	stack->arr=(char *)malloc(sizeof(capacity));
	return stack;
}
void push(struct Stack * stack,char ch)
{
	if(stack->top==-1)
	{
		stack->arr[++stack->top]=ch;
	}
	else
	{
		if(Checker(stack->arr[stack->top-1])<Checker(ch))
		{
			stack->arr[++stack->top]=ch;
		}
		else
		{
			while(Checker(stack->arr[stack->top-1])>=Checker(ch))
			{
				char p=pop(stack);
				if(p=='a')
				break;
				cout<<p;
			}
			stack->arr[++stack->top]=ch;
		}
	}
}
char pop(struct Stack * stack)
{
	if(stack->top==-1)
	{
		return 'a';
	}
	return stack->arr[stack->top--];
}
int Checker(char x)
{
	switch(x)
	{
		case '+':
		case '-':
			return 1;
		case '*':
		case '/':
			return 2;
		case '^':
			return 3;		
	}
}
int ischar(char ch)
{
	return (ch>='a' && ch<='z') ||(ch>='A' && ch<='Z');
}
int main()
{
	string str;
	getline(cin,str);
	struct Stack *stack=CreateStack(str.size());
	for(int i=0;i<str.size();i++)
	{
		if(ischar(str[i]))
		{
			cout<<str[i];
		}
		else
		{
			push(stack,str[i]);
		}
	}
}
