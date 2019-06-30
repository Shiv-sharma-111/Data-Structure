#include<bits/stdc++.h>
using namespace std;
struct Stack
{
	int top;
	unsigned capacity;
	int *arr;
};
struct Stack* createstack(int capacity)
{
	struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
	stack->top=-1;
	stack->capacity=capacity;
	stack->arr= (int *)malloc(sizeof(int)*stack->capacity);
	return stack;
}
void push(struct Stack *stack,int x)
{
	if(stack->top==stack->capacity-1)
	{
		cout<<"Stack is full"<<endl;
		return;
	}
	stack->arr[++stack->top]=x;
}
int pop(struct Stack* stack)
{
	if(stack->top==-1)
	{
		return -1;
	}
	return stack->arr[stack->top--];
}
int main()
{
	string str;
	getline(cin,str);
	int n=str.size();
	int result = 0,k;
	struct Stack* stack = createstack(n);
	push(stack,-1);
	for(int i=0;i<n;i++)
	{
		if(str[i]=='(')
		{
			push(stack,i);
		}
		else
		{
			k=pop(stack);
			if(pop(stack)==-1)
			{
				push(stack,i);
			}
			else
			{
				if(i-stack->top>result)
				{
					result = i-stack->top;
				}
			}
		}
	}
	cout<<result<<endl;
	
}
